#include"Escribano.h"

void IngresarEscribano(Escribano &Es)
{
  printf(" \tIngresar Nombre de Escribano: ");

  strcrear(Es.Nombre);
  fflush(stdin);
  scan(Es.Nombre);

  printf(" \n\tIngresar Apellido de Escribano: ");

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

