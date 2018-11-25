#include"Expediente.h"

void IngresarExpediente(Expediente &Ex, int n)
{
    Ex.codigo=n;
    printf("\n Ingrese Cartula: ");
    fflush(stdin);
    scan(Ex.Caratula);
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
