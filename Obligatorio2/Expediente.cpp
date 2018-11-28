#include"Expediente.h"

void IngresarExpediente(Expediente &Ex, int n)
{
    Ex.codigo=n;
    printf("\n Ingrese Cartula: ");
    fflush(stdin);
    scan(Ex.Caratula);
    fflush(stdin);
    IngresarEscribano(Ex.Escri);
    printf("\n Ingrese cantidad de Paginas: ");
    scanf("%d",&Ex.CantPaginas);


}

void MostrarExpediente(Expediente E)
{
    printf("%d",Darcodigo(E));
    print(E.Caratula);
    MostrarEscribano(E.Escri);
    printf("%d",E.CantPaginas);
}
int Darcodigo(Expediente E)
{
    return E.codigo;
}

int DarCantPaginas (Expediente E)
{
    return E.CantPaginas;
}

void DarCaratula(Expediente E, String &S)
{
    strcop(S,E.Caratula);


}

void DarEscribano(Expediente E, String &Nombre, String &Apellido)
{
      DarNombre(E.Escri,Nombre);
      DarApellido(E.Escri,Apellido);

}
