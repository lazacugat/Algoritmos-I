#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#define  n_max 5

void pedirArreglo(int a[])
{
    int i=0;
    while (i<n_max)
    {
        printf("Ingrese el valor %d del arreglo\n",i);
        scanf("%d", &a[i]);
        i=i+1;
    }

}

bool paratodo(int a[])
{
    bool val;
    if (a[0]>0 && a[1]>0 && a[2]>0 && a[3]>0 && a[4]>0)
    {
        val=true;
    }
    else

        val=false;

    return val;
}
bool existe(int a[])
{
    bool val;
    if (a[0]>0 || a[1]>0 || a[2]>0 || a[3]>0 || a[4]>0)
    {
        val=true;
    }
    else

        val=false;
    
    return val;
}

int main(void)
{
    printf("El programa te hace crear un arreglo de 5 elementos\n");
    assert(n_max>0);
    int a[n_max];
    pedirArreglo(a);
    int x;
    printf("Ingrese 0 si desea ver si todos los elementos del arreglo son mayores a 0\n");
    printf("Ingrese 1 si desea ver si existe al menos un elemento del arreglo mayor a 0\n");
    scanf("%d",&x);
    assert(x==1 || x==0);
    if ( x==0)
    {
        printf("Todos los elementos son positivos es %d",paratodo(a));
    }
    else

        printf("Existe al menos un elemento positivo es %d",existe(a));
    
    return 0;
}
