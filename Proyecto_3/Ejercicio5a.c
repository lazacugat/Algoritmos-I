#include <stdio.h>
int main(void)

{
    int i;
    printf("Ejercicio 1h)\n");
    printf("Insertar un valor para la variable i\n");
    scanf("%d", &i);
    
    while (i!=0)
    {
        i= i-1;
    }
    /*¿Deberia colocar un assert para que el programa no se rompa cuando x<0?*/
    /*¿Porque despues de un tiempo la terminal me devuelve 0, significa false?*/
    printf("    El valor de i es : %d\n", i);
    printf("Ejercicio 1i)\n");
    printf("Insertar un valor para la variable i\n");
    scanf("%d", &i);
    while (i!=0)
    {
        i=0;
    }
    printf("    El valor de i es : %d\n", i);
    return 0;
}