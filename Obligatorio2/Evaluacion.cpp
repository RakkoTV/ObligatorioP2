#include"Evaluacion.h"

int DarcodigoEva(Evaluacion Ev)
{
    return Ev.CodigoExpediente;
}

void IngresarEvaluacion (Evaluacion &Ev, int n,Fecha fe){
    int codigo;
    Ev.CodigoExpediente=n;
    Ev.f=fe;
    printf("\n\tIngrese la descripcion de la evaluacion:\n\t ");
    scan(Ev.desc);
    printf("Ingrese:\n\t 1-Satifactoria\n\t 2-Incompleta\n\t 3-Pendiente\n");
    fflush(stdin);
    scanf("%d",&codigo);

    switch (codigo){

    case 1:
            Ev.e=SATISFACTORIA;
    break;
    case 2:
            Ev.e=INCOMPLETA;
    break;
    case 3:
            Ev.e=PENDIENTE;
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

