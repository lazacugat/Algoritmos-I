#include <stdio.h>
#include <assert.h>

void pedirArreglo(int a[], int n_max)
{
    int i=0;
    while (i<n_max)
    {
        printf("Ingrese el valor de posicion %d del arreglo\n", i);
        scanf("%d", &a[i]);
        i=i+1;
    }

}

void intercambiar(int a[], int n_max, int i, int j)
{
    int iaux,p=0;
    iaux=a[i];
    a[i]=a[j];
    a[j]=iaux;
    while (p<n_max)
    {
        printf("El valor del elemento en posicion %d es %d \n",p, a[p]);
        p=p+1;
    }
}
int main(void)
{
    int n_max;
    printf("Ingresar el tamaño del arreglo mayor igual a 2\n");
    scanf("%d", &n_max);
    assert(n_max>1);
    int a[n_max];
    pedirArreglo(a,n_max);
    int i,j;
    printf("Ingresar la posicion del primer elemento del arreglo que desea intercambiar\n");
    scanf("%d", &i);
    assert(0<=i && i<n_max);
    printf("Ingresar una posicion distinta a la del primer elemento del arreglo, que desea intercambiar\n");
    scanf("%d", &j);
    assert(0<=j && j<n_max && j!=i);
    intercambiar(a,n_max,i,j);
    return 0;
}
