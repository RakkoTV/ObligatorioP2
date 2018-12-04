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


void InsBack(ListaEval &E, Evaluacion Ev);

//Verificar Fecha
boolean VerificarFecha (ListaEval e, Fecha f);

//Borra de Lista
void BorrarEval (ListaEval &E, int n);

//Muestra la Lista Inversa
void ListarEvaInverso(ListaEval E);

void ListarXcodigo(ListaEval E, int y);

boolean ExisteEvalCod(ListaEval E,int e);
//Mayor cantidad de revisiones
int MayorCantidadRev(ListaEval E);

//Devolver Tipo de revision
void ContarCantidadRevXTipo(ListaEval E);

 void Levantar_Evaluacion (Evaluacion Ev, FILE *f);
 void Levantar_Lista (ListaEval E,String nomArch);
void Bajar_Revision (Evaluacion Ev, FILE * f);
void Bajar_ListaEvaluaciones (ListaEval E , String nomArch);



#endif // LISTAEVALUACIONES_H_INCLUDED
