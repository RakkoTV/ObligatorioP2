#ifndef EXPEDIENTE_H_INCLUDED
#define EXPEDIENTE_H_INCLUDED
#include "Escribano.h"

typedef struct ExpeABB{
                    int codigo;
                    String Caratula;
                    Escribano Escri;
                    int CantPaginas;
                    ExpeABB *hizq;
                    ExpeABB  *hder;
                } Expediente;

typedef Expediente * Expedientes;


#endif // EXPEDIENTE_H_INCLUDED
