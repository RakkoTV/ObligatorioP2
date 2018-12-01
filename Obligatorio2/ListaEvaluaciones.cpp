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
        if ((Darano(f))>(DarAnoEvaluacion(e->info)))
        {
            verificar=TRUE;
        }
            else
            if ((Darano(f))==(DarAnoEvaluacion(e->info)))
            {
            if ((Darmes(f))>(DarMesEvaluacion(e->info)))
                {
                   verificar=TRUE;
                }
               else
                 if ((Darmes(f))==(DarMesEvaluacion(e->info)))
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

void ListarEvaInverso(ListaEval E)
{

if (E->sig!=NULL){
    MostrarEv(E->info);
    ListarEvaInverso(E->sig);
}
    else
        MostrarEv(E->info);
}

void ListarXcodigo(ListaEval E, int y)
{

    if (E !=NULL)
        {

            if(DarcodigoEva(E->info)==y)
            {
                 MostrarEv(E->info);
                 return ListarXcodigo(E->sig,y);

            }



             }
      else
     return  ListarXcodigo(E->sig,y);

}

boolean ExisteEvalCod(ListaEval E,int e)
{
    boolean ex=FALSE;
    while((E != NULL)&&(ex==FALSE))
    {
        if(e==DarcodigoEva(E->info))
            ex=TRUE;
            else
            E=E->sig;

    }
    return ex;



}









