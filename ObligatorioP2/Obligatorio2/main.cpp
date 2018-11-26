#include "ListaEvaluaciones.h"
#include "ArbolExpediente.h"

int main()
{

    int aux,aux2;
    char X;
    ABBExp AB;
    Expediente EX,EX2;
    crear(AB);


    printf("\n Ingrese el codigo de expediente: ");
    scanf("%d",&aux);

    if (ExisteExp(AB,aux)==FALSE)
        {
            IngresarExpediente(EX,aux);
            MostrarExpediente(EX);
            IngresarExpedienteABB(AB,EX);
           }
           else
            printf("El expediente ya existe");

            ////////////
}
