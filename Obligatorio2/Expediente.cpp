#include"Expediente.h"

void IngresarExpediente(Expediente &Ex, int n)
{
    IngresarEscribano(Ex.Escri);
    Ex.codigo=n;
    printf("\n\tIngrese Caratula: ");
    fflush(stdin);
    strcrear(Ex.Caratula);
    scan(Ex.Caratula);
    fflush(stdin);

    printf("\n\tIngrese Cantidad de Paginas: ");
    scanf("%d",&Ex.CantPaginas);



}

void MostrarExpediente(Expediente E)
{
    printf("\n\tExpediente Codigo: ");
    printf("%d",DarcodigoExp(E));
    printf("\n\tExpediente Caratula: ");
    print(E.Caratula);
    printf("\n\tExpediente Escribano: ");
    MostrarEscribano(E.Escri);
    printf("\n\tCantidad de Paginas: ");
    printf("%d",E.CantPaginas);
    printf("\n-----------------------------");
}
int DarcodigoExp(Expediente E)
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
