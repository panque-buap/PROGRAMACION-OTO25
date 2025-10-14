#include <stdio.h>

//El objetivo del siguiente programa
//es entender y trabajar con operadores
//lógicos


//Un operador lógico es un simbolo que se utiliza
//para representar una operación lógica

//Las tres operaciones lógicas fundamentales son:

//y
//o
//no


int main()
{
    int booleano, booleano2;
    booleano = 0;
    booleano2 = 1;

    //A continuación se muestra la operación NOT
    printf("El resultado de la operacion NOT es %d \n", !booleano);

    //A continuación se muestra la operación AND
    printf("El resultado de la operacion AND entre bool1 y bool2 es %d \n", (booleano && booleano2));

    //A continuación se muestra la operación AND
    printf("El resultado de la operacion OR entre bool1 y bool2 es %d \n", (booleano || booleano2));


    return 0;
}
