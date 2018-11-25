#ifndef LISTAEVALUACIONES_H_INCLUDED
#define LISTAEVALUACIONES_H_INCLUDED
#include"Evaluacion.h"

typedef struct Eval
                   { Evaluacion info;
                     Eval * sig;
                   }NodoEval;

typedef NodoEval * ListaEval;
#endif // LISTAEVALUACIONES_H_INCLUDED
