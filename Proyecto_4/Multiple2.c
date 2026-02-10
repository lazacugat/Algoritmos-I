#include <stdio.h>
int pedirEntero(void)
{
    int x;
    printf("Insertar un numero \n");
    scanf("%d", &x);
    return x;
}
int main(void)
{
    int x, y,z,xaux,yaux,zaux;
    x = pedirEntero();
    y = pedirEntero();
    z = pedirEntero();
    xaux = x;
    yaux = y;
    zaux = z;
    x = yaux;
    y = xaux + yaux + zaux;
    z = xaux + yaux;
    printf("El valor de x es %d\n", x);
    printf("El valor de y es %d\n", y);
    printf("El valor de z es %d\n", z);
    return 0;
}