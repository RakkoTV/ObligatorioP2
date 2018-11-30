
#include "Menu.h"

int main()
{

Evaluacion Ev;
ListaEval Le;
ABBExp AB;
Expediente E;
crear(AB);
CrearLista(Le);

int op=0;

do{
printf("\nOpciones:\n");
printf("\t1) Ingresar un Expediente\n");
printf("\t2) Ver los Expedientes Ingresados\n");
printf("\t3) Ingresar Expediente a Revisar\n");
printf("Borrar un expediente");
printf("\t0) Salir\n");
scanf("%d",&op);

MostrarMenu(op,AB,E,Ev,Le);


}while(op!=0);
}
