#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include "Boolean.h"
typedef struct{
      int dia;
      int mes;
      int ano;
}Fecha;
//Carga Fecha(dia-mes-año)
void CargarFecha(Fecha &f);
//Mostrar Fecha
void MostrarFecha(Fecha f);
//Selectora para año
int Darano(Fecha f);
//Selectora para mes
int Darmes(Fecha f);
//Selectoria para dia
int Dardia(Fecha f);

boolean FechaValida(Fecha f);
#endif // FECHA_H_INCLUDED
