#include <stdio.h>

//El objetivo del siguiente programa
//es entender y trabajar con operadores
//l�gicos


//Un operador l�gico es un simbolo que se utiliza
//para representar una operaci�n l�gica

//Las tres operaciones l�gicas fundamentales son:

//y
//o
//no


int main()
{
    int booleano, booleano2;
    booleano = 0;
    booleano2 = 1;

    //A continuaci�n se muestra la operaci�n NOT
    printf("El resultado de la operacion NOT es %d \n", !booleano);

    //A continuaci�n se muestra la operaci�n AND
    printf("El resultado de la operacion AND entre bool1 y bool2 es %d \n", (booleano && booleano2));

    //A continuaci�n se muestra la operaci�n AND
    printf("El resultado de la operacion OR entre bool1 y bool2 es %d \n", (booleano || booleano2));


    return 0;
}
