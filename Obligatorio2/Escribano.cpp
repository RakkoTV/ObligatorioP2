#include"Escribano.h"

void IngresarEscribano(Escribano &Es)
{
  printf("\n Ingresar Escribano : \t");
  scan(Es.Nombre);
  printf("\n Ingresar Escribano : \t");
  scan(Es.Apellido);

}

void MostrarEscribano(Escribano Es)
{
    print(Es.Nombre);
    printf("\n");
    print(Es.Apellido);



}
