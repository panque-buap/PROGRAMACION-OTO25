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
