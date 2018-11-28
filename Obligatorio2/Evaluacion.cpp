#include"Evaluacion.h"

int Darcodigo(Evaluacion Ev)
{
    return Ev.CodigoExpediente;
}

void IngresarEvaluacion (Evaluacion &Ev, int n,Fecha fe){
    int codigo;
    Ev.CodigoExpediente=n;
    Ev.f=fe;
    printf("Ingrese la descripcion de la evaluacion: ");
    scan(Ev.desc);
    printf("Ingrese 1-Satifactoria 2-Incompleta 3-Pendiente");
    scanf("%d",codigo);

    switch (codigo){

    case 1: Ev.e=SATISFACTORIA;
    break;
    case 2: Ev.e=INCOMPLETA;
    break;
    case 3: Ev.e=PENDIENTE;
    break;
    }

}

int DarDiaEvaluacion (Evaluacion EV){
return Dardia(EV.f);

}

int DarMesEvaluacion (Evaluacion EV){
return Darmes(EV.f);
}

int DarAnoEvaluacion (Evaluacion EV){
return Darano(EV.f);
}

