
#include "Menu.h"



int main()
{



Evaluacion Ev;
ListaEval Le;
ABBExp AB;
Expediente E;
crear(AB);
CrearLista(Le);
int n, contador;
String nomArch;
int op=0;

do{
//Levantar_Expediente (AB,"Expediente.dat");

FILE * f=fopen("Evaluacion.dat","wb");

fclose(f);

Levantar_Lista (Le,"Evaluacion.dat");


printf("\nOpciones:\n");
printf("\t1) Ingresar un Expediente\n");
printf("\t2) Ver los Expedientes Ingresados\n");
printf("\t3) Ver las Evaluaciones Ingresadas\n");
printf("\t4) Ingresar Expediente a Revisar\n");
printf("\t5) Borrar un expediente\n");
printf("\t6) Mostrar Mayor Expediente\n");
printf("\t7) Mostrar Menor Expediente\n");
printf("\t8) Mostrar Revisiones Expedientes por Codigo\n");
printf("\t9) Cantidad de expedientes por escribano\n");
printf("\t10) Expedientes con Mayor Revisiones\n");
printf("\t11) Cantidad de Evaluaciones de cada tipo\n");
printf("\t12) Mostrar por rango de fechas\n");

printf("\t0) Salir\n");
scanf("%d",&op);

MostrarMenu(op,AB,E,Ev,Le,n,contador);


}while(op!=0);
Bajar_ListaEvaluaciones (Le , "Evaluacion.dat");
Bajar_ABB (AB, "Expediente.dat");
}
