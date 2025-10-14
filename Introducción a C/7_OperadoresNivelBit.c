#include <stdio.h>

//El objetivo de este programa es realizar operaciones a nivel bit
//para ello vamos a utilizar operadores bitwise (a nivel de bit)


int main()
{

    unsigned int a = 5, b = 9;

    //A continuaci�n vamos a realizar la operaci�n AND a nivel de bit
    printf("a AND b = %u\n", a & b);

    //A continuaci�n vamos a realizar la operaci�n OR a nivel de bits
    printf("a OR b = %u\n", a | b);

    //A continuaci�n vamos a realizar la operaci�n NOT a nivel de bit
    printf("NOT a = %u\n", a = ~a);

    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));

    //Ahora vamos a trabajar con los corrimientos de bits
    // a la izquierda y a la derecha

    printf("b<<1 = %u\n", b << 1);

    printf("b>>1 = %u\n", b >> 1);

    return 0;

}
