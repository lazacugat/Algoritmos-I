#include <stdio.h>
int pedirEntero(void)
{
    int x;
    printf("Ingresar un numero\n");
    scanf("%d", &x);
    return x;
}
int main(void)
{
    int x, y,xaux;
    x = pedirEntero();
    y = pedirEntero();
    xaux = x;
    x = xaux + 1;
    y = xaux + y;
    printf("El valor de x es %d\n", x);
    printf("El valor de y es %d\n", y);
    return 0;
}

