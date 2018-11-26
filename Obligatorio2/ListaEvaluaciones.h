#ifndef LISTAEVALUACIONES_H_INCLUDED
#define LISTAEVALUACIONES_H_INCLUDED
#include"Evaluacion.h"

typedef struct Eval
                   { Evaluacion info;
                     Eval * sig;
                   }NodoEval;

typedef NodoEval * ListaEval;

//Crear Lista
void Crear(ListaEval &L);

//Verificar si esta vacia
boolean EsVacia(ListaEval E);

//Insertar adelante
void InsFront(ListaEval &E, Evaluacion Ev);

#endif // LISTAEVALUACIONES_H_INCLUDED
