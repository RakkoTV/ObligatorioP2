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
    printf("Entra if");
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
