#include <stdio.h>
//Se incluye biblioteca para utilizar
//comandos de entrada y salida (scanf y printf)


//El objetivo de este programa, es solicitar al usuario
//su nombre y su edad.

//Posteriormente mostrar esta información en consola

int main()
{
    //Primero, debemos definir las variables
    int age;
    char name[20];

    //A continuación, vamos a colocar un mensaje
    //de salida, para solicitarle al usuario su
    //nombre y su edad

    printf("Ingresa tu edad: ");
    //printf se utiliza para mostrar mensaje de salida

    scanf("%d", &age);
    //scanf se utiliza para adquirir un dato de entrada

    printf("\n Ingrese tu nombre: ");

    scanf("%s", name);

    //Finalmente, voy a mostrar su nombre y su edad

    printf("\n El nombre de la persona es: %s", name);
    printf("\n La edad de la persona es: %d años", age);

    return 0;
    //Recuerden, return 0 representa el regreso del dato
    // de salida de la función principal y representa que
    //el programa ha finalizado con éxito.
    }
