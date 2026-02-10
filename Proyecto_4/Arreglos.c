#include <stdio.h>
#include <assert.h>

void pedirArreglo(int a[], int n_max)
{
    int i=0;
    while (i<n_max)
    {
        printf("Ingrese el valor %d del arreglo\n",i);
        scanf("%d", &a[i]);
        i=i+1;
    }

}
void imprimeArreglo(int a[], int n_max)
{
    int i=0;
    while (i<n_max)
    {
        printf("El valor de la posicion %d del arreglo es %d \n",i, a[i]);
        i=i+1;
    }
}
int main(void)
{
    int n_max;
    printf("El programa te hace crear un arreglo y luego te lo imprime \n");
    printf("Ingresar el tamaño del arreglo \n");
    scanf("%d", &n_max);
    assert(n_max>0);
    int a[n_max];
    pedirArreglo(a,n_max);
    imprimeArreglo(a,n_max);
    return 0;
}
