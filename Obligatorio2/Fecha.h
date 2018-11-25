#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include "Boolean.h"
typedef struct{
      int dia;
      int mes;
      int ano;
}Fecha;
//Carga Fecha(dia-mes-a�o)
void CargarFecha(Fecha &f);
//Mostrar Fecha
void MostrarFecha(Fecha f);
//Selectora para a�o
int ano(Fecha f);
//Selectora para mes
int mes(Fecha f);
//Selectoria para dia
int dia(Fecha f);

boolean FechaValida(Fecha f);
#endif // FECHA_H_INCLUDED
