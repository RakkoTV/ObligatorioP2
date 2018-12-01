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




