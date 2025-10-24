#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//El objetivo de este programa es generar
//un numero entero aleatorio

//Posteriormente el usuario deberá pensar un número
//y en caso de atinarle al numero aleatorio ganará un premio
//en caso contrario perderá.

int main()
{
	
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


    srand(time(NULL));
    int randomGuess=0;
    int randomNumber = 0;
    randomNumber = ((rand()%100)+1);
    printf("porfavor ingresa un numero entero: \n");
    scanf("%d", &randomGuess);
    printf("%d \n", randomNumber);

    if (randomGuess == randomNumber)
    {
      printf("GANASTE");
    }

    else
    {
        printf("PERDISTE");
    }

    return 0;
}
