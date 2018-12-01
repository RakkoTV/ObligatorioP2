
#include "Menu.h"

int main()
{

Evaluacion Ev;
ListaEval Le;
ABBExp AB;
Expediente E;
crear(AB);
CrearLista(Le);
int n;

int op=0;

do{
printf("\nOpciones:\n");
printf("\t1) Ingresar un Expediente\n");
printf("\t2) Ver los Expedientes Ingresados\n");
printf("\t3) Ver las Evaluaciones Ingresadas\n");
printf("\t4) Ingresar Expediente a Revisar\n");
printf("\t5) Borrar un expediente\n");
printf("\t6) Mostrar Mayor Expediente\n");
printf("\t7) Mostrar Menor Expediente\n");
printf("\t8) Mostrar Revisiones Expedientes por Codigo\n");

printf("\t0) Salir\n");
scanf("%d",&op);

MostrarMenu(op,AB,E,Ev,Le,n);


}while(op!=0);
}
