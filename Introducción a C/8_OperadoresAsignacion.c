//El objetivo de este programa es conocer los diferentes
//tipos de operadores de asginaci�n

#include <stdio.h>

int main()
{
    unsigned int num1 = 8;
    //En la sentencia anterior, el n�mero es 8 es asignado a la
    //variable num1 en una direcci�n de memoria X

    num1 += 5;
    //esto es equivalente a
    // num1 = num1 + 5;

    printf("El resultado de num1+= 5 es %u \n", num1);
    return 0;
}
