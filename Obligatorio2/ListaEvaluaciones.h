#ifndef LISTAEVALUACIONES_H_INCLUDED
#define LISTAEVALUACIONES_H_INCLUDED
#include"Evaluacion.h"

typedef struct Eval
                   { Evaluacion info;
                     Eval * sig;
                   }NodoEval;

typedef NodoEval * ListaEval;

//Crear Lista
void CrearLista(ListaEval &L);

//Verificar si esta vacia
boolean EsVacia(ListaEval E);

//Insertar adelante
void InsFront(ListaEval &E, Evaluacion Ev);

//Verificar Fecha
boolean VerificarFecha (ListaEval e, Fecha f);

//Borra de Lista
void BorrarEval (ListaEval &E, int n);

//Muestra la Lista
void MostrarEv(ListaEval E);

#endif // LISTAEVALUACIONES_H_INCLUDED
