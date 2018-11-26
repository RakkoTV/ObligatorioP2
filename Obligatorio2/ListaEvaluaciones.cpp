#include"ListaEvaluaciones.h"


void Crear(ListaEval &L)
{
	L = NULL;
}

boolean EsVacia(ListaEval E)
{
	boolean es = FALSE;
	if(E == NULL)
	   es = TRUE;

	return es;
}

void InsFront(ListaEval &E, Evaluacion Ev)
{
	ListaEval aux = new NodoEval;
	aux -> info = Ev;
	aux -> sig = E;
	E = aux;
}
