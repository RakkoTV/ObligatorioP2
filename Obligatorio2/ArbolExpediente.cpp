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

void Bajar_Expediente(ABBExp AB, FILE * f)
{
String s,s1,s2;
int n,n1;
if (AB != NULL)
{
n=DarcodigoExp(AB->info);
fwrite (&n, sizeof (int), 1, f);
strcrear(s);
DarCaratula(AB->info,s);
Bajar_String(s,f);
strcrear(s1);
strcrear(s2);
DarEscribano(AB->info,s1,s2);
Bajar_String(s1,f);
Bajar_String(s2,f);
n1=DarCantPaginas(AB->info);
fwrite(&n1,sizeof(int),1,f);

Bajar_Expediente(AB->hizq, f);
Bajar_Expediente(AB->hder, f);
}
}
void Bajar_ABB (ABBExp AB, String nomArch)
{
FILE * f = fopen (nomArch, "wb");
Bajar_Expediente(AB, f);
fclose (f);
}
//void Subir_Expediente(ABBExp &AB, FILE * f)
//{
//String s,s1,s2;
//int n,n1;
//if (f!=NULL)
//{
////n=DarcodigoExp(AB->info);
//fread(&n, sizeof (int), 1, f);
////strcrear(s);
//////DarCaratula(AB->info,s);
////Levantar_String(s,f);
////strcrear(s1);
////strcrear(s2);
//////DarEscribano(AB->info,s1,s2);
////Levantar_String(s1,f);
////Levantar_String(s2,f);
//////n1=DarCantPaginas(AB->info);
////fread(&n1,sizeof(int),1,f);
//
//Subir_Expediente(AB->hizq, f);
//Subir_Expediente(AB->hder, f);
//}
//}

void Levantar_Expediente (ABBExp &AB, String nomArch)
{
    String s,s1,s2;
int n,n1;
FILE * f = fopen (nomArch, "rb");
//Subir_Expediente(AB,f);
fread(&n, sizeof(int),1,f);
while (!feof(f))
{

IngresarExpedienteABB(AB,AB->info);
strcrear(s);
Levantar_String(s,f);
IngresarExpedienteABB(AB,AB->info);
strcrear(s1);
Levantar_String(s1,f);
IngresarExpedienteABB(AB,AB->info);
strcrear(s2);
Levantar_String(s2,f);
IngresarExpedienteABB(AB,AB->info);
fread(&n1,sizeof(int),1,f);
IngresarExpedienteABB(AB,AB->info);


}
fclose (f);
}

