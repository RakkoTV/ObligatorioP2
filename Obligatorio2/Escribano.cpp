#include"Escribano.h"

void IngresarEscribano(Escribano &Es)
{
  printf(" Ingresar Nombre: ");

  strcrear(Es.Nombre);
  fflush(stdin);
  scan(Es.Nombre);

  printf(" \n Ingresar Apellido: ");

  strcrear(Es.Apellido);
  scan(Es.Apellido);
}

void MostrarEscribano(Escribano Es)
{
    printf("\n\tNombre del Escribano: ");
    print(Es.Nombre);
    printf("\n\tApellido del Escribano: ");
    print(Es.Apellido);
}

void DarNombre(Escribano ES, String &S )
{
  strcop(S,ES.Nombre);
}

void DarApellido(Escribano ES, String &S )
{
  strcop(S,ES.Apellido);
}

