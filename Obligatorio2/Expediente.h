#ifndef EXPEDIENTE_H_INCLUDED
#define EXPEDIENTE_H_INCLUDED
#include "Escribano.h"

typedef struct    {
                    int codigo;
                    String Caratula;
                    Escribano Escri;
                    int CantPaginas;
                 } Expediente;



//Selectora Codigo
int Darcodigo(Expediente E);


#endif // EXPEDIENTE_H_INCLUDED
