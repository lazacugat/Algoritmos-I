#include <stdio.h>
#include <assert.h>

struct datos_t
{
    int maximo;
    int minimo;
};

typedef struct
{
    int maximo;
    int minimo;
}datos_t;

void pedirElemento(int numeros[],int n_max)
{
    int i=0;
    while (i<n_max)
    {
        printf("Ingresar el elemento %d del arreglo \n",i);
        scanf("%d", &numeros[i]);
        i=i+1;
    }
}

datos_t min_max(int numeros[], int n_max)
{
    int k=1;
    datos_t dat;
    dat.maximo=numeros[0];
    dat.minimo=numeros[0];
    while (k<n_max)
    {
        if (dat.minimo>numeros[k])
        {
            dat.minimo=numeros[k];
        }
        if (dat.maximo<numeros[k])
        {
           dat.maximo=numeros[k]; 
        }
        k=k+1;
    }
    return dat;
}

int main(void)
{
    printf("El programa te hace crear un arreglo y te devuelve el minimo y maximo valor de los elementos del mismo \n");
    int n_max;
    printf("Ingresar la cantidad de elementos que deseas que tenga el arreglo \n");
    scanf("%d", &n_max);
    assert(n_max>0);
    int numeros[n_max];
    pedirElemento(numeros,n_max);
    datos_t dat;
    dat=min_max(numeros,n_max);
    printf("El valor minimo del arreglo es %d \n", dat.minimo);
    printf("El valor maximo del arreglo es %d \n", dat.maximo);
    return 0;
}