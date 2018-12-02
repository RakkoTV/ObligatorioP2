#include"Evaluacion.h"

int DarcodigoEva(Evaluacion Ev)
{
    return Ev.CodigoExpediente;
}

void IngresarEvaluacion (Evaluacion &Ev, int n,Fecha fe){
    int codigo;
    Ev.CodigoExpediente=n;
    Ev.f=fe;
    fflush(stdin);
    printf("\n\tIngrese la descripcion de la evaluacion:\n\t ");
    strcrear(Ev.desc);
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


void MostrarEv(Evaluacion E)
{
  printf("\nLa Fecha de la revision es: ");
  MostrarFecha(E.f);
  printf(" El Codigo es: ");
  printf("%d",E.CodigoExpediente);
  printf(" Descripcion: ");
  print(E.desc);
  printf(" Evaluacion: ");
  switch (E.e){

  case SATISFACTORIA: printf("Satisfactoria");
  break;
  case INCOMPLETA: printf("Incompleta");
  break;
  case PENDIENTE: printf("Pendiente");
  break;
   }

}

int DartipoEvaluacion(Evaluacion E)
{   int Evaluacion;
    switch(E.e)
    {
      case SATISFACTORIA: Evaluacion=1;
                           break;
     case  INCOMPLETA:   Evaluacion= 2;
                           break;
     case PENDIENTE:   Evaluacion= 3;
                         break;
    }

      return Evaluacion;
    }

