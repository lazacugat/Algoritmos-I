#include <stdio.h>
int pedirEntero(void)
{
    int x;
    printf("Ingresar un numero\n");
    scanf("%d", &x);
    return x;
}
int minimo(void)
{
    int x, y;
    printf("Ingresar dos numeros y el programa va a devolver el menor\n");
    x = pedirEntero();
    y = pedirEntero();
    if (x>y)
    
        x=y;

    printf("El menor numero es el %d\n", x);
    return 0;
}

int main(void)
{
    minimo();
    return 0;
}