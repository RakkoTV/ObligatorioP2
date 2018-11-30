#ifndef EXPEDIENTE_H_INCLUDED
#define EXPEDIENTE_H_INCLUDED
#include "Escribano.h"

typedef struct    {
                    int codigo;
                    String Caratula;
                    Escribano Escri;
                    int CantPaginas;
                 } Expediente;

//Cargar Expediente
void IngresarExpediente(Expediente &Ex,int n);

//Mostrar Expediente
void MostrarExpediente(Expediente E);

//Selectora Codigo
int DarcodigoExp(Expediente E);

//Selectora Cantidad de paginas
int DarCantPaginas (Expediente E);
//Dar caratula
void DarCaratula(Expediente E, String &s);

//Dar Escribano
void DarEscribano(Expediente E, String &Nombre, String &Apellido);



#endif // EXPEDIENTE_H_INCLUDED
