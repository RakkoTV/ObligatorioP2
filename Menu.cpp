#include "Menu.h"


void MostrarMenu(int opcion, ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le)
{
    switch(opcion)
    {

        case 1:
        {
            IngresaExpedienteM(AB, E);


        break;}

        case 2:

        {
            ListarExpedientes(AB);

        break;}

        case 3:
            {
               MostrarEv(Le);
            break;}

        case 4:
            {
                IngresaExpedienteARevisar(AB,E,Ev,Le);

            break;}

        case 5:
            {

                EliminaExpediente (AB);
                EliminaEval(Le);
            break;}




    }

}

void EliminaExpediente(ABBExp &AB)
{
                int n;
                printf("\n\tIngrese un numero de expediente: ");
                fflush(stdin);
                scanf("%d",&n);
                if (ExisteExp(AB,n)==TRUE)
                {
                  BorrarABB(n,AB);
                }
                else
                    printf("\n\tNo existe expediente\n");

}

void EliminaEval(ListaEval &Le)
{
                int n;
                printf("\n\tIngrese un numero de expediente: ");
                fflush(stdin);
                scanf("%d",&n);

                BorrarEval (Le, n);

}


void IngresaExpedienteM (ABBExp &AB, Expediente &E)
{
int n;

printf("\n\tIngrese un numero de expediente: ");
fflush(stdin);
scanf("%d",&n);
if (ExisteExp(AB,n)==FALSE)
{
  IngresarExpediente(E,n);
  IngresarExpedienteABB(AB,E);
}
else
    printf("\n\tYa existe expediente\n");

}


void IngresaExpedienteARevisar (ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le)
{

int n;
Fecha f;

printf("\n\tIngrese un numero de expediente a Revisar: ");
scanf("%d",&n);
if (ExisteExp(AB,n)==TRUE)
{
    CargarFecha(f);
    if(VerificarFecha(Le,f)==TRUE)
    {
    IngresarEvaluacion (Ev,n,f);
    InsFront(Le,Ev);
    }
    else
        printf("Fecha invalida");
}
else
    printf("No existe expediente");

}