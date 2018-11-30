#include"ListaEvaluaciones.h"


void CrearLista(ListaEval &L)
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
         verificar=FALSE;
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

/* Se propone una solución recursiva */
void BorrarEval (ListaEval &E, int n)
{
if (E != NULL)
{
 if (n == DarcodigoEva(E -> info))
 {
 ListaEval aux = E;
 E = E -> sig;
 delete aux;
 BorrarEval (E, n);
 }
 else
 BorrarEval (E -> sig, n);
 }
}


void MostrarEv(ListaEval E)
{
 while (E != NULL)
{
  printf("\nLa Fecha de la revision es: ");
  printf("%d",DarDiaEvaluacion(E ->info));
  printf("/");
  printf("%d",DarMesEvaluacion(E ->info));
  printf("/");
  printf("%d",DarAnoEvaluacion(E ->info));
  printf("\nEl Codigo es: ");
  printf("%d",DarcodigoEva(E ->info));
  E = E -> sig;
}
}






