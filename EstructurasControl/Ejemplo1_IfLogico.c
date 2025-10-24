#include <stdio.h>
	
	/*Problema: Una institución académica desea automatizar la evaluación inicial de las solicitudes de admisión de estudiantes. El sistema debe determinar si un solicitante cumple con los requisitos para distintos tipos de programas o ayudas financieras, basándose en su edad, promedio académico, beca y nivel de ingresos familiares.
Detalles:
1.- Sólo pueden postular los estudiantes que tengan 18 años o más.
2.- Si el estudiante tiene una edad mayor o igual a 18:
•	Si su promedio es de 9 o más y además tiene una beca o su ingreso familiar es menor a 15000 pesos, entonces:
o	Si no tiene beca, se le informa que califica para la beca socioeconómica 
o	Si ya tiene una beca, se le informa que es elegible para la beca al mérito
•	Si no cumple con lo anterior pero su promedio es 7 o más, se le informa que califica para admisión estándar sin beca.
•	Si su promedio es menor que 7, se le informa que debe mejorar su promedio.
Si el estudiante tiene menos de 18 años, el sistema debe informar que debe tener al menos 18 años para poder aplicar.
Nota: El usuario NO debe estar inscrito ya en la institución, es decir debe ser un estudiante de nuevo ingreso.
*/


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
