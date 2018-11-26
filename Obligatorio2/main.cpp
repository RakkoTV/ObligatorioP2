#include"ArbolExpediente.h"
#include"ListaEvaluaciones.h"

int main()
{


ABBExp AB;
Expediente E;
int n;
crear(AB);

printf("Ingrese un numero de expediente");
scanf("%d",&n);
if (ExisteExp(AB,n)==FALSE)
{
  IngresarExpediente(E,n);
  IngresarExpedienteABB(AB,E);




}
else
    printf("Ya existe expediente");


ListarExpedientes(AB);




}
