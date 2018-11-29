#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "ListaEvaluaciones.h"
#include "ArbolExpediente.h"


void MostrarMenu(int opcion,ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le);

void IngresaExpedienteM (ABBExp &AB, Expediente &E);

void IngresaExpedienteARevisar (ABBExp &AB, Expediente &E,Evaluacion &Ev,ListaEval &Le);

#endif // MENU_H_INCLUDED
