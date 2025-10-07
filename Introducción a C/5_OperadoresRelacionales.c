#include <stdio.h>
//El objetivo de este programa es utilizar
//operadores relacionales

//Recordemos un operador relacional es aquel
//que se utiliza para comparar dos valores


int main()
{

    int num1, num2;

    printf("Ingrese el numero1: \n");
    scanf("%d", &num1);

    printf("\n Ingrese el numero2: \n");
    scanf("%d", &num2);

    //El primer operador relacional a utilizar
    //es el igual que

    printf("El resultado de igual que es: %d \n", (num1==num2) );
    printf("El resultado de mayor que es: %d \n", (num1>num2) );
    printf("El resultado de menor que es: %d \n", (num1<num2) );
    printf("El resultado de mayor o igual que es: %d \n", (num1>=num2) );
    printf("El resultado de menor o igual que es: %d \n", (num1<=num2) );
    printf("El resultado de diferente es: %d \n", (num1!=num2) );

    return 0;
}
