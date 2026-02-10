#include <stdio.h>
#include <assert.h>

int pedirEntero(void)
{
    int x;
    printf("Ingresar un valor\n");
    scanf("%d", &x);
    return x;
}

int intercambiar(void)
{
    int x,y,z,xaux,yaux,zaux;
    x=pedirEntero();
    y=pedirEntero();
    z=pedirEntero();
    xaux=x;
    yaux=y;
    zaux=z;
    z=xaux;
    x=yaux;
    y=zaux;
    printf("El valor anterior de x era %d, ahora es %d \n",xaux,x);
    printf("El valor anterior de y era %d, ahora es %d \n",yaux,y);
    printf("El valor anterior de z era %d, ahora es %d \n",zaux,z);
    return 0;
}
int main(void)
{ 
    printf("Se va a realizar un intercambio de los valores de variables, donde z=x,x=y,y=z \n");
    printf("Ingresar un valor para x,y,z \n");
    intercambiar();
    return 0;
}
