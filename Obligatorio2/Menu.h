#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "ListaEvaluaciones.h"
#include "ArbolExpediente.h"


void MostrarMenu(int opcion,ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le, int n);

void IngresaExpedienteM (ABBExp &AB, Expediente &E);

void IngresaExpedienteARevisar (ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le);

void EliminaExpediente (ABBExp &AB, int n);

void EliminaEval(ListaEval &Le, int n);


void MostrarMayorExpediente(ABBExp AB);

void MostrarMenorExpediete(ABBExp AB);

void  MostrarXcodigo(ListaEval E, int y);




#endif // MENU_H_INCLUDED
