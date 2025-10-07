#include <stdio.h>

//El objetivo de este programa es entender el concepto
//de operadores en programación

//Un operador es un simbolo o una palabra que representa
//una operación

//Los operadores se pueden clasificar siendo los más populares:
//operadores aritmeticos
//operadores relacionales
//operadores unitarios
//operadores a nivel de bits
//operadores lógicos

int main()
{
    //A continuación se muestran los operadores aritmeticos

    //Para entender estos conceptos vamos a crear un programa
    //que sea capaz de sumar, restar, multiplicar y divir
    //numeros enteros
    int num1, num2, result;
    float num3, num4, result2;
    //Esto es equivalente a
    //int num1;
    //int num2;
    //int result;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);
    printf("\n Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    //Vamos ahora a realizar la operación de suma
    result = num1 + num2;
    printf("\n El resultado de la suma es: %d \n", result);

    //Vamos ahora a realizar la operación de resta
    result = num1 - num2;
    printf("\n El resultado de la resta es: %d \n", result);

    //Vamos ahora a realizar la operación de multiplicación
    result = num1 * num2;
    printf("\n El resultado de la multiplicación es: %d \n", result);

    //Vamos ahora a realizar la operación de división
    num3 = num1;
    num4 = num2;
    result2 = num3 / num4;
    printf("\n El resultado de la división es: %.1f \n", result2);

    //Vamos ahora a realizar la operación de división
    //otra vez

    printf("\n El resultado de la división2 es: %.1f \n", ((float)num1 / num2));
    // (float) num1 es un proceso de conversión de tipo de dato
    // de entero a flotante
    //Esto se conoce en programación como type casting

    //Vamos ahora a realizar la operación de división
    result = num1 % num2;
    printf("\n El residuo de la división es: %d \n", result);




    return 0;
}
