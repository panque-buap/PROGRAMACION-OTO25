#include <stdio.h>

int main()
{
    int edad, tieneBeca, estaInscrito;
    float promedio, ingreso;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Tiene beca?: ");
    scanf("%d", &tieneBeca);
    printf("esta Inscrito: ");
    scanf("%d", &estaInscrito);

    printf("Ingrese su promedio: ");
    scanf("%f", &promedio);
    printf("Ingrese su ingreso familiar: ");
    scanf("%f", &ingreso);

    if (estaInscrito)
    {
        printf("NO APLICA X REINGRESO \n");
    }

    else
    {
        if (edad>=18)
        {
            if (promedio>=9)
            {
                if (tieneBeca || (ingreso<15000))
                {
                    if(tieneBeca)
                    {
                        printf("BECA AL MERITO \n");
                    }
                    else
                    {
                        printf("BECA SOCIOECONÓMICA \n");
                    }
                }
                else
                {
                    printf("CANDIDATO A INGRESO PERO NO A BECA \n");

                }
            }
            else
            {
                if(promedio>=7)
                {
                    printf("CANDIDATO A INGRESO PERO NO A BECA\n");
                }
                else
                {
                    printf("NO APLICA X PROMEDIO, MEJORAR SU PROMEDIO\n");
                }

            }
        }
        else
        {
          printf("NO APLICA X EDAD, DEBE TENER MÍNIMO 18\n");
        }
    }

    return 0;
}
