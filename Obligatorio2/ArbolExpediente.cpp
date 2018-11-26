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
          if((Darcodigo(AB->info)) == n)
            TRUE;
            else
                if (n < Darcodigo(AB->info))
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
        if((Darcodigo(E))< (Darcodigo(EXP->info)))
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


