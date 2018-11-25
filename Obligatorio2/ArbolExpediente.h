#ifndef ARBOLEXPEDIENTE_H_INCLUDED
#define ARBOLEXPEDIENTE_H_INCLUDED"
#include "Expediente.h"

typedef struct ExpeABB{
                      Expediente info;
                      ExpeABB *hizq;
                      ExpeABB *hder;
                     } NodoExp;

typedef NodoExp * ABBExp;

//Crear arbol
void crear(ABBExp &ab);

//Dado un numero de expediene verificar si existe en arbol
boolean ExisteExp(ABBExp AB, int n);

//Ingresar Expediente en Arbol
void IngresarExpedienteABB(ABBExp &EXP, Expediente E);

#endif // ARBOLEXPEDIENTE_H_INCLUDED
