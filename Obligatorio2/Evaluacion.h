#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include "String.h"
#include "EvaluacionEnum.h"
#include "Fecha.h"

typedef struct Eval
                 { int NumeroExpediente;
                   Fecha f;
                   String desc;
                   EvalRev e;
                   Eval * sig;
                 }Evaluacion;
typedef Evaluacion * Evaluaciones;
#endif // EVALUACION_H_INCLUDED
