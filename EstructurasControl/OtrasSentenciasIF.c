#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int randomGuess=0;
    int randomNumber = 0;
    randomNumber = ((rand()%100)+1);
    printf("porfavor ingresa un numero entero: \n");
    scanf("%d", &randomGuess);
    printf("%d \n", randomNumber);

    //Nota1: Una condición puede solo llevar una sentencia if
    //if (randomGuess==randomNumber) printf("GANASTE");

    //Nota2:Una condición puede llevar tanto su if como su else
    //if (randomGuess==randomNumber) printf("GANASTE");
    //else printf("PERDISTE");

    //Nota3: Una manera para poder visualizar de manera mas ordenada
    //el uso de la sentencia if es mediante las {}


    if (randomGuess==randomNumber)
    {
        printf("GANASTE");
    }
    else
    {
       printf("PERDISTE");
    }

    //Nota4: En caso de que se tenga más de una condición podemos
    //trabajar con diferentes estrategias:

    //Escalera If else if ...

    /*if (condi1) funcion1();
        else func2();
            if (cond2) func3();
                else func4();
                    if func5();
                        else func(6);*/

    //Estructura de ifs anidados
    /*if (cond1)
    {
        if (cond2)
        {
            if(cond3)
            {
                if(cond4)
                {
                    //.....
                }

                else
                {

                }
            }

            else
            {


            }
        }
        else{

        }
    }*/


    //if ... else if ... else

    /*if (cond1)
    {

    }

    else if (cond2)
    {

    }

    else

    {

    }*/



}
