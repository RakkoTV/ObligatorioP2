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

#endif // EVALUACION_H_INCLUDED

