#ifndef ARBOLEXPEDIENTE_H_INCLUDED
#define ARBOLEXPEDIENTE_H_INCLUDED"
#include "Expediente.h"

typedef struct ExpeABB{
                      Expediente info;
                      ExpeABB *hizq;
                      ExpeABB  *hder;
                     } NodoExp;

typedef NodoExp * ABBExp;


#endif // ARBOLEXPEDIENTE_H_INCLUDED
