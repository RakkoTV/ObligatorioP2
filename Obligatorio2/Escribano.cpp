#include"Escribano.h"

void IngresarEscribano(Escribano &Es)
{
  printf("\n Ingresar Nombre : \t");
  scan(Es.Nombre);
  printf("\n Ingresar Apellido : \t");
  scan(Es.Apellido);

}

void MostrarEscribano(Escribano Es)
{
    print(Es.Nombre);
    printf("-");
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

