#include <stdio.h>

void absoluto(int x)
{
    if (x<0)
    
        x=x*(-1);
    
    printf("El valor absoluto del numero ingresado es %d\n",x);
}

int pedirEntero(void)
{
    int x;
    printf("Ingresar un numero para ver su valor absoluto \n");
    scanf("%d", &x);
    return x;
}

int main(void)
{
    absoluto(pedirEntero());
    return 0;
}