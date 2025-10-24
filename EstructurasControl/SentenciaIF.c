#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//El objetivo de este programa es generar
//un numero entero aleatorio

//Posteriormente el usuario deber� pensar un n�mero
//y en caso de atinarle al numero aleatorio ganar� un premio
//en caso contrario perder�.

int main()
{
	
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
