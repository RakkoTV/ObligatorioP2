#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include "String.h"
#include "EvaluacionEnum.h"
#include "Fecha.h"

typedef struct { Fecha f;
                 int CodigoExpediente;
                 String desc;
                 EvalRev e;
                 }Evaluacion;


int Darcodigo(Evaluacion Ev);

void IngresarEvaluacion (Evaluacion &Ev, int n,Fecha fe);

int DarDiaEvaluacion (Evaluacion EV);

int DarMesEvaluacion (Evaluacion EV);

int DarAnoEvaluacion (Evaluacion EV);




#endif // EVALUACION_H_INCLUDED

