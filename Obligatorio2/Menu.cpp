#include "Menu.h"


void MostrarMenu(int opcion, ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le, int n, int contador)
{
    switch(opcion)
    {

        case 1:
        {
            IngresaExpedienteM(AB, E);


        break;}

        case 2:
        {
            if (ArbolVacio(AB)==FALSE)
            ListarExpedientes(AB);
            else
                printf("El arbol esta vacia");

        break;}

        case 3:
            {
                if (EsVacia(Le)==FALSE){
                  ListarEvaInverso(Le);
                }
                else
                    printf("No hay Evaluaciones disponibles.");
            break;}


        case 4:
            {
                IngresaExpedienteARevisar(AB,E,Ev,Le);

            break;}

        case 5:
            {
            BorrarExp(n,AB,Le);
            break;
            }
        case 6:
            {
                MostrarMayorExpediente(AB);
                break;
            }
        case 7:
            {
                 MostrarMenorExpediete(AB);
                 break;
             }
        case 8:
            {
                    MostrarRevExpxCodigo(Le,n);
                    break;
            }

        case 9:
            {

                Cantexpxescribano(AB);

            break;}
        case 10:
                 {


                 printf("Expediente con Mayor cantidad de revisiones: %d",MayorCantidadRev(Le));
                break;
                 }
        case 11:
                 {
                     ContarCantidadRevXTipo(Le);
                     break;
                 }

        case 12:
                {
                    Fecha f1,f2;
                    printf("Ingrese la primer Fecha");
                    CargarFecha(f1);
                    printf("Ingrese la segunda fecha");
                    CargarFecha(f2);
                    if (FechaMenor(f1,f2))
                    {

                    }

                }


    }



}

void BorrarExp(int n, ABBExp &AB ,ListaEval &Le)
{
        printf("\n\tIngrese un numero de expediente: ");
        fflush(stdin);
        scanf("%d",&n);
        EliminaExpediente (AB,n);
        EliminaEval(Le,n);
}


void MostrarRevExpxCodigo(ListaEval &Le, int n)
{
       printf("Ingrese un numero de Expediente");

       scanf("%d",&n);
       fflush(stdin);
       MostrarXcodigo(Le,n);
}

void Cantexpxescribano(ABBExp &AB)
{
                String s;
                strcrear(s);
                fflush(stdin);
                printf("ingese un apellido");
                scan(s);
                printf("Cantidad de expedientes de escribano: %d " ,ContarEscribano(AB,s));

}

void EliminaExpediente(ABBExp &AB, int n)
{

                if (ExisteExp(AB,n)==TRUE)
                {
                  BorrarABB(n,AB);
                }
                else
                    printf("\n\t No existe expediente \n");

}

void EliminaEval(ListaEval &Le, int n)
{


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

void MostrarMayorExpediente(ABBExp AB)
{
 if(ArbolVacio(AB)==FALSE)
   ListarExpedienteMayor(AB);
 else
    printf("No existen expedientes");


}


void MostrarMenorExpediete(ABBExp AB)
{
   if(ArbolVacio(AB)==FALSE)
   ListarExpedienteMenor(AB);
    else
    printf("No existen expedientes");

}

void  MostrarXcodigo(ListaEval E , int y)
{
    if(ExisteEvalCod(E,y)==TRUE){
        ListarXcodigo(E,y);
    }
    else
        printf("No existe codigo de expediente");
}

