#include"ArbolExpediente.h"


void crear(ABBExp &ab)
{
ab=NULL;
}

boolean ExisteExp(ABBExp AB, int n)
{
   if(AB==NULL)
     FALSE;
     else
        {
          if((DarcodigoExp(AB->info)) == n)
            TRUE;
            else
                if (n < DarcodigoExp(AB->info))
                 return ExisteExp(AB->hizq,n);
                  else
                  return ExisteExp(AB->hder,n);

       }
}


void IngresarExpedienteABB(ABBExp &EXP, Expediente E)
{

    if (EXP==NULL)

    {

        EXP=new NodoExp;
        EXP->info=E;
        EXP->hizq=NULL;
        EXP->hder=NULL;

    }
     else
        if((DarcodigoExp(E))< (DarcodigoExp(EXP->info)))
           return IngresarExpedienteABB(EXP->hizq,E);
           else
           return IngresarExpedienteABB(EXP->hder,E);




}
void ListarExpedientes(ABBExp AB)
{
  Orden(AB);


}


void PreOrden(ABBExp AB)
{

if (AB !=NULL)
{


  MostrarExpediente(AB->info);
   PreOrden(AB->hizq);
   PreOrden(AB->hder);

}
}

void Orden(ABBExp AB)
{
    if(AB !=NULL)
    {
        Orden(AB->hizq);
        MostrarExpediente(AB->info);

        Orden(AB->hder);
    }

}

void PostOrden(ABBExp AB)
{
    if(AB !=NULL)
    {
       PostOrden(AB->hizq);
        PostOrden(AB->hder);
       MostrarExpediente(AB->info);

    }
}




void Borrar_Minimo (ABBExp &AB)
{
	ABBExp aux;
	if (AB -> hizq == NULL)
	{
		aux = AB -> hder;
		delete AB;
		AB = aux;
	}
	else
		Borrar_Minimo (AB -> hizq);
}

void BorrarABB (int x , ABBExp &AB)
{

    ABBExp aux;

if (x == DarcodigoExp(AB->info))
{
	if (AB -> hder == NULL)
	{
		aux = AB-> hizq;
		delete AB;
		AB = aux;
	}else
		{
			if (AB->hizq == NULL)
				{
					aux = AB -> hder;
					delete AB;
					AB = aux;
				} else
					{
						AB -> info=Minimo (AB -> hder);
						Borrar_Minimo (AB -> hder);
					}
		}
}else
	{
		if (x < DarcodigoExp(AB->info))
			BorrarABB (x, AB -> hizq);
		else
			BorrarABB (x, AB -> hder);
	}
}

Expediente Minimo (ABBExp AB)
{
 if (AB -> hizq == NULL)
 return AB->info;
 else
 return Minimo (AB-> hizq);
}


boolean ArbolVacio (ABBExp a)
{
	boolean es = FALSE;
	if(a == NULL)
	   es = TRUE;

	return es;
}


void ListarExpedienteMenor(ABBExp AB)
{
 if (AB -> hizq == NULL)
  MostrarExpediente(AB->info);
 else
 return ListarExpedienteMenor (AB-> hizq);
}

void ListarExpedienteMayor(ABBExp AB)
{
    if(AB->hder == NULL)
    MostrarExpediente(AB->info);
    else
    return ListarExpedienteMayor(AB->hder);

}

int ContarEscribano(ABBExp AB, String s)
{
  String nom,ape;
   strcrear(ape);
//
    strcrear(nom);

    if(AB==NULL)
       return 0;
       else
       {


        DarEscribano(AB->info, nom,ape);
        if((streq(s,ape)==TRUE))
       return 1 + ContarEscribano(AB->hizq,s) + ContarEscribano(AB->hder,s);
        else
       return ContarEscribano(AB->hizq,s)+ContarEscribano(AB->hder,s);

       }
}

void Bajar_Expediente(Expediente e, FILE * f)
{

fwrite(&e.codigo,sizeof(int),1,f);
Bajar_String(e.Caratula,f);
Bajar_Escribano(e.Escri,f);
fwrite(&e.CantPaginas,sizeof(int),1,f);

}


void Bajar_ABB (ABBExp AB, String nomArch)
{
FILE * f = fopen (nomArch, "wb");
Bajar_ABB_Aux(AB,f);
fclose (f);
}

void Bajar_ABB_Aux(ABBExp AB,FILE * f)
{
if (AB != NULL)
 {

Bajar_Expediente(AB->info, f);
Bajar_ABB_Aux (AB -> hizq, f);
Bajar_ABB_Aux (AB -> hder, f);
}
}

void Levantar_Expediente (Expediente &e, FILE * f)
{
fread(&e.codigo,sizeof(int),1,f);
strcrear(e.Caratula);
Levantar_String(e.Caratula,f);
Levantar_Escribano(e.Escri,f);
fread(&e.CantPaginas,sizeof(int),1,f);

}





void Levantar_ABB (ABBExp &AB, String nomArch)
{
 FILE * f = fopen (nomArch, "rb");
Expediente exp;
Levantar_Expediente(exp,f);

 while (!feof(f))
 {
 IngresarExpedienteABB (AB, exp);
Levantar_Expediente(exp,f);

 }
 fclose (f);
}

