#include <assert.h>
#include <stdio.h>

void pedirArreglo(int numeros[], int tam)
{
    int i=0;
    while (i<tam)
    {
        printf("Ingrese el elemento de la posicion %d del arreglo\n",i);
        scanf("%d", &numeros[i]);
        i=i+1;
    }
}

int maximadiferencia(int a[], int n_max) 
{
    int r=a[0],s=a[0],n=1;
    while (n != n_max) 
    {
        if (r<a[n])
        {
            r=a[n];
        }
        if (s>a[n])
        {
            s=a[n];
        }
        n=n+1;
    }
    return r;
}


int main(void) 
{
    printf("El programa encuentra la mayor diferencia entre los elementos del arreglo\n");
    int n_max;
    printf("Ingresar la cantidad de elementos que deseas que tenga el arreglo \n");
    scanf("%d", &n_max);
    assert(n_max>0);
    int a[n_max];
    pedirArreglo(a,n_max);
    printf("La mayor diferencia entre los elementos del arreglo es %d\n", maximadiferencia(a,n_max));
    return 0;
}