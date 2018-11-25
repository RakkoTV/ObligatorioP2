#include"Fecha.h"

void CargarFecha(Fecha &f)
{
    printf("Ingrese ano");
    scanf("%d",&f.ano);
    printf("Ingrese mes");
    scanf("%d",&f.mes);
    printf("Ingrese dia");
    scanf("%d",&f.dia);

}

void MostrarFecha(Fecha f)
{

printf("%d - %d - %d \t",f.ano,f.mes,f.dia);


}

int ano(Fecha f)
{
    return f.ano;
}

int mes(Fecha f)
{
    return f.mes;
}
int dia(Fecha f)
{
 return f.dia;
}

boolean FechaValida (Fecha f)
{boolean esbiciesto=FALSE;
 boolean valido=TRUE;


 if (f.ano % 4==0)
    esbiciesto=TRUE;

 if((f.mes >=1)&&(f.mes <=12))
     valido=TRUE;
     else
     valido=FALSE;
if(valido==TRUE)
{

switch(f.mes)
     {
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12 :  if((f.dia>=1) && (f.dia<=31))
                 valido=TRUE;
                 else
                 valido=FALSE;
                 break;

     case 4:
     case 6:
     case 9: if((f.dia>=1) && (f.dia<=30))
               valido=TRUE;
               else
               valido=FALSE;
               break;
     case 2: if((esbiciesto==TRUE)&&((f.dia>=1) && (f.dia<=28)))
               valido=TRUE;
               else
               if((esbiciesto==FALSE)&&((f.dia>=1) && (f.dia<=31)))
               valido=TRUE;
               else
                valido=FALSE;
               break;

     }

     return valido;

}






}
