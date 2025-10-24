#include <stdio.h>
	
	/*Problema: Una instituci�n acad�mica desea automatizar la evaluaci�n inicial de las solicitudes de admisi�n de estudiantes. El sistema debe determinar si un solicitante cumple con los requisitos para distintos tipos de programas o ayudas financieras, bas�ndose en su edad, promedio acad�mico, beca y nivel de ingresos familiares.
Detalles:
1.- S�lo pueden postular los estudiantes que tengan 18 a�os o m�s.
2.- Si el estudiante tiene una edad mayor o igual a 18:
�	Si su promedio es de 9 o m�s y adem�s tiene una beca o su ingreso familiar es menor a 15000 pesos, entonces:
o	Si no tiene beca, se le informa que califica para la beca socioecon�mica 
o	Si ya tiene una beca, se le informa que es elegible para la beca al m�rito
�	Si no cumple con lo anterior pero su promedio es 7 o m�s, se le informa que califica para admisi�n est�ndar sin beca.
�	Si su promedio es menor que 7, se le informa que debe mejorar su promedio.
Si el estudiante tiene menos de 18 a�os, el sistema debe informar que debe tener al menos 18 a�os para poder aplicar.
Nota: El usuario NO debe estar inscrito ya en la instituci�n, es decir debe ser un estudiante de nuevo ingreso.
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
                        printf("BECA SOCIOECON�MICA \n");
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
          printf("NO APLICA X EDAD, DEBE TENER M�NIMO 18\n");
        }
    }

    return 0;
}
