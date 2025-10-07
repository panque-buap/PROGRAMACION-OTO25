#include <stdio.h>

//El objetivo de este programa es entender el concepto
//de operadores en programaci�n

//Un operador es un simbolo o una palabra que representa
//una operaci�n

//Los operadores se pueden clasificar siendo los m�s populares:
//operadores aritmeticos
//operadores relacionales
//operadores unitarios
//operadores a nivel de bits
//operadores l�gicos

int main()
{
    //A continuaci�n se muestran los operadores aritmeticos

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

    //Vamos ahora a realizar la operaci�n de suma
    result = num1 + num2;
    printf("\n El resultado de la suma es: %d \n", result);

    //Vamos ahora a realizar la operaci�n de resta
    result = num1 - num2;
    printf("\n El resultado de la resta es: %d \n", result);

    //Vamos ahora a realizar la operaci�n de multiplicaci�n
    result = num1 * num2;
    printf("\n El resultado de la multiplicaci�n es: %d \n", result);

    //Vamos ahora a realizar la operaci�n de divisi�n
    num3 = num1;
    num4 = num2;
    result2 = num3 / num4;
    printf("\n El resultado de la divisi�n es: %.1f \n", result2);

    //Vamos ahora a realizar la operaci�n de divisi�n
    //otra vez

    printf("\n El resultado de la divisi�n2 es: %.1f \n", ((float)num1 / num2));
    // (float) num1 es un proceso de conversi�n de tipo de dato
    // de entero a flotante
    //Esto se conoce en programaci�n como type casting

    //Vamos ahora a realizar la operaci�n de divisi�n
    result = num1 % num2;
    printf("\n El residuo de la divisi�n es: %d \n", result);




    return 0;
}
