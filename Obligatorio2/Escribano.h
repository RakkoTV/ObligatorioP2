#ifndef ESCRIBANO_H_INCLUDED
#define ESCRIBANO_H_INCLUDED
#include "String.h"
typedef struct
{
  String Nombre;
  String Apellido;

}Escribano;


//Ingresar Escribano
void IngresarEscribano(Escribano &Es);
//Mostrar Escribano
void MostrarEscribano(Escribano Es);

#endif // ESCRIBANO_H_INCLUDED