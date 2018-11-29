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

boolean VerificarFecha (ListaEval e, Fecha f)
{
    boolean verificar=TRUE;
    if(EsVacia(e) == FALSE)
    {
        boolean verificar=FALSE;
        if ((Darano(f))>=(DarAnoEvaluacion(e->info)))
        {
            if ((Darmes(f))>=(DarMesEvaluacion(e->info)))
                {
                if ((Dardia(f))>=(DarDiaEvaluacion(e->info)))
                {
                                verificar=TRUE;
                }
                 }
        }
    }
return verificar;
}






