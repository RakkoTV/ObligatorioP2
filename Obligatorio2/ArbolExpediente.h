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

//Listar Expedientes de menor a mayor
void ListarExpedientes(ABBExp AB);

//Lista en Preorden(Expediente)
void PreOrden(ABBExp AB);

//Lista Orden(Expediente)
void Orden(ABBExp AB);

//Lista Postorden(Expediente)
void PostOrden(ABBExp AB);
//Devuelve el Minimo
Expediente Minimo (ABBExp a);
//Borrar mas chico
void Borrar_Minimo (ABBExp &AB);
//Borrar del Arbol de Expediente el numero ingresado
void BorrarABB (int x , ABBExp &AB) ;




#endif // ARBOLEXPEDIENTE_H_INCLUDED
