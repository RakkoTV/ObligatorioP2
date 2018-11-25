#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include "String.h"
#include "EvaluacionEnum.h"
#include "Fecha.h"

typedef struct { Fecha f;
                 String desc;
                 EvalRev e;
                 }Evaluacion;

#endif // EVALUACION_H_INCLUDED

