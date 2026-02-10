#include <stdio.h>
#include <assert.h>
int pedirEntero(void)
{
    int N;
    printf("Ingresar un valor mayor o igual a 0 \n");
    scanf("%d", &N);
    assert(N>=0);
    return N;
    
}
int sumaHasta(int N)
{
    int i=0, x=0;
    while (N>=i)
    {
        x=x+i;
        i=i+1;
    }
    printf("la suma de los antecesores mayores a 0 y el valor ingresado es %d\n",x);
    return 0;
}
int main(void)
{
    printf("El programa devuelve la suma de los N naturales antecesores, junto con el mismo numero ingresado \n");
    sumaHasta(pedirEntero());
    return 0;
}