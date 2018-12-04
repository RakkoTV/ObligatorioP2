#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "ListaEvaluaciones.h"
#include "ArbolExpediente.h"


void MostrarMenu(int opcion,ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le, int n, int contador);

void IngresaExpedienteM (ABBExp &AB, Expediente &E);

void IngresaExpedienteARevisar (ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le);

void EliminaExpediente (ABBExp &AB, int n);

void EliminaEval(ListaEval &Le, int n);

void BorrarExp(int n, ABBExp &AB ,ListaEval &Le);

void MostrarMayorExpediente(ABBExp AB);

void MostrarMenorExpediete(ABBExp AB);

void  MostrarXcodigo(ListaEval E, int y);

void Cantexpxescribano(ABBExp &AB);

void MostrarRevExpxCodigo(ListaEval &Le, int n);

void MostrarCantidadEntreFechas(ListaEval E);
#endif // MENU_H_INCLUDED
