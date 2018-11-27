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
//dar nombre
void DarNombre(Escribano ES, String &S );

//dar apellido
void DarApellido(Escribano ES, String &S );

#endif // ESCRIBANO_H_INCLUDED
