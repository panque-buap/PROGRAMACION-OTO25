//El objetivo de este programa es entender
//la declaración de variables con sus respectivos
//tipos de datos

#include <stdio.h>

//Es posible declarar variables fuera de todas
//las funciones, estas variables se llaman
//variables globales

char option;

int main()
{

    //Cuando se declara una variable dentro de una función
    //esta variable se llama variable local
    //y solamente funciona dentro de la función

    //A continuación se muestra como se declara
    //una variable de tipo de dato entero
    signed int num;    //para tipo de dato entero
                    // signed int es equivalente a int
    const int SQUARESIDES = 4;
    unsigned int num2;


    float  squareResult;   //para tipo de dato decimal
    double squareResult2;  //para tipo de dato decimal con mayor precisión

    char letter;    //para tipo de dato carácter (revisar código ASCII)

    //sizeof  //sizeof es un operador unitario que se utiliza
            //para determinar el tamaño en bytes de un tipo de dato

    printf("El espacio en memoria del tipo de dato int es %lu bytes \n",sizeof(int));
    printf("El espacio en memoria del tipo de dato float es %lu bytes \n",sizeof(float));
    printf("El espacio en memoria del tipo de dato double es %lu bytes \n",sizeof(double));
    printf("El espacio en memoria del tipo de dato char es %lu bytes \n",sizeof(char));

    return 0;
}