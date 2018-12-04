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
//Selectora para dia
int Dardia(Fecha f);
//Devuelve si la fecha uno es menor que la 2
boolean FechaMenor(Fecha f1, Fecha f2);
//Devuelve si la fecha uno es mayor que la 2
boolean FechaMayor(Fecha f1, Fecha f2);
//Fecha Valida
boolean FechaValida(Fecha f);

void Levantar_Fecha (Fecha &F, FILE * f);
void Bajar_Fecha (Fecha F, FILE * f);
#endif // FECHA_H_INCLUDED
