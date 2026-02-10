#include <stdio.h>
#include <assert.h>

void holaHasta(int n)
{
    while (n>0)
    {
        n=n-1;
        printf("Hola \n");
    }  
}
int pedirEntero(void)
{
    int n;
    printf("Ingresar la cantidad de veces que desea imprimir Hola\n");
    scanf("%d", &n);
    assert (n>0);
    return n;
}

int main(void)
{
    holaHasta(pedirEntero());
    return 0;
}
