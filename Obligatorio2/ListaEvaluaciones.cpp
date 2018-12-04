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

void InsBack(ListaEval &E, Evaluacion Ev)
{
	ListaEval aux;
	aux = E;

	while(aux!=NULL){
		if(aux->sig == NULL){
			aux->sig = new NodoEval;
			aux->sig->info = Ev;
			aux->sig->sig = NULL;
			aux = aux->sig->sig;
		}else{
			aux = aux->sig;
		}
	}
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
            else
     return  ListarXcodigo(E->sig,y);
             }


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


int MayorCantidadRev(ListaEval E)
{    ListaEval aux=E,aux2=E;

    int CodigoMayor, Cantidad=0,Maximo=0, Codigoiter;
    CodigoMayor=DarcodigoEva(E->info);
   while(aux !=NULL)
   {
    Cantidad=0;
    Codigoiter=DarcodigoEva(aux->info);
        while( aux2 !=NULL)
           {
        if(DarcodigoEva(aux2->info)==Codigoiter)
           Cantidad=1+Cantidad;
           aux2=aux2->sig;

          }
          if (Cantidad>Maximo)
            {
           Maximo=Cantidad;
            CodigoMayor=Codigoiter;
       }
       else

        if(Cantidad == Maximo)
       {

           if (Codigoiter< CodigoMayor)
              CodigoMayor=Codigoiter;

       }
       Cantidad=0;
       aux=aux->sig;
       aux2=aux;

   }

   return CodigoMayor;

}

void ContarCantidadRevXTipo(ListaEval E)
{   int cantidadSat=0,cantidadInc=0,cantidadPen=0;

    while(E !=NULL)
    {


    switch(DartipoEvaluacion(E->info))
    {
    case 1: cantidadSat++;
            break;

    case 2: cantidadInc++;
            break;

    case 3:cantidadPen++;
            break;
    }
    E=E->sig;

    }

    printf("Cantidad de revisiones Satisfactorias: %d, \n Cantidad de revisiones Incompletas: %d, \n Cantidad de revisiones Pendientes %d",cantidadSat,cantidadInc,cantidadPen);



}


void MostrarXFecha (ListaEval E,Fecha F1,Fecha F2)
{








}

void Levantar_Lista (ListaEval E,String nomArch)
{
    FILE * f=fopen(nomArch,"rb");
    Evaluacion Ev;
    Levantar_Evaluacion (Ev,f);
    while(!feof(f))
    {
        InsFront(E,Ev);
        Levantar_Evaluacion (Ev,f);

    }
    fclose(f);


}


void Levantar_Evaluacion (Evaluacion Ev, FILE *f)
{
Levantar_Fecha (Ev.f,f);
fread(&Ev.CodigoExpediente,sizeof(int),1,f);
Levantar_String(Ev.desc,f);
fread(&Ev.e,sizeof(int),1,f);

}





