#include"ArbolExpediente.h"
#include"ListaEvaluaciones.h"

int main()
{

Evaluacion Ev;
ListaEval Le;
ABBExp AB;
Expediente E;
int n;
Fecha f;
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

printf("Ingrese el numero de expediente a revisar");
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
