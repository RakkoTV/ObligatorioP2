#ifndef EXPEDIENTE_H_INCLUDED
#define EXPEDIENTE_H_INCLUDED
#include "Escribano.h"

typedef struct    {
                    int codigo;
                    String Caratula;
                    Escribano Escri;
                    int CantPaginas;
                 } Expediente;


#endif // EXPEDIENTE_H_INCLUDED
