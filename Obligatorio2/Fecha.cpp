#include"Fecha.h"

void CargarFecha(Fecha &f)
{
    printf("\n\tIngrese ano");
    scanf("%d",&f.ano);
    printf("\n\tIngrese mes");
    scanf("%d",&f.mes);
    printf("\n\tIngrese dia");
    scanf("%d",&f.dia);

}

void MostrarFecha(Fecha f)
{

printf("%d - %d - %d \t",f.ano,f.mes,f.dia);


}

int Darano(Fecha f)
{
    return f.ano;
}

int Darmes(Fecha f)
{
    return f.mes;
}
int Dardia(Fecha f)
{
 return f.dia;
}

boolean FechaValida (Fecha f)
 {
     boolean valido = FALSE;
     switch (f.mes)
     {
         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
             if (f.dia >=1 && f.dia <=31)
                {
                 valido = TRUE;
                }

          break;

          case 4: case 6: case 9: case 11:
                   if (f.dia >=1 && f.dia <=30)
                        {
                        valido = TRUE;
                        }
          break;

          case 2:  if (f.ano % 4 == 0)
                    {
                        if (f.dia >=1 && f.dia <=29)
                        {
                            valido = FALSE;
                        }
                    }
            else
                {
                    if (f.dia >=1 && f.dia <=28)
                    {
                      valido = TRUE;
                    }
                }
        }
            return valido;
}




//Devuelve si la fecha uno es menor que la 2
boolean FechaMenor(Fecha f1, Fecha f2)
{
    boolean EsMenor=FALSE;

    if(f1.ano<f2.ano)
        {
        EsMenor=TRUE;
        }
        else
            if((f1.ano==f2.ano) && (f1.mes < f2.mes)) // seria solo menor y no iriria el dia ver si tiene un bug
                {
                EsMenor=TRUE;
                }
                else
                    if((f1.mes == f2.mes)&&(f1.dia < f2.dia))
                    {
                        EsMenor=TRUE;
                    }
    return EsMenor;

}



boolean FechaMayor(Fecha f1, Fecha f2)
{
    boolean EsMayor=FALSE;

    if(f1.ano>f2.ano)
        {
        EsMayor=TRUE;
        }
        else
            if((f1.ano==f2.ano) && (f1.mes > f2.mes)) // seria solo menor y no iriria el dia ver si tiene un bug
                {
                EsMayor=TRUE;
                }
                else
                    if((f1.mes == f2.mes)&&(f1.dia > f2.dia))
                    {
                        EsMayor=TRUE;
                    }
    return EsMayor;

}

void Levantar_Fecha (Fecha &F, FILE * f)
{
    fread (&F.ano, sizeof(int), 1, f);
    fread (&F.mes, sizeof(int), 1, f);
    fread (&F.dia, sizeof(int), 1, f);

}

void Bajar_Fecha (Fecha F, FILE * f)
{
    fwrite (&F.ano, sizeof(int), 1, f);
    fwrite (&F.mes, sizeof(int), 1, f);
    fwrite (&F.dia, sizeof(int), 1, f);
}
