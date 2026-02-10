#include <stdio.h>
#include <assert.h>

void pedirArreglo(int a[], int n_max)
{
    int i=0;
    while (i<n_max)
    {
        printf("Ingrese un valor \n");
        scanf("%d", &a[i]);
        i=i+1;
    }

}
int sumatoria(int a[], int n_max)
{
    int i=0,j=0;
    while (i<n_max)
    {
        j=j+a[i];
        i=i+1;
    }
    return j;
}
int main(void)
{
    int x;
    printf("Ingresar el tamaño del arreglo \n");
    scanf("%d", &x);
    assert(x>0);
    int a[x];
    pedirArreglo(a,x);
    printf("La suma de los elementos del arreglo es %d", sumatoria(a,x));
    return 0;
}
