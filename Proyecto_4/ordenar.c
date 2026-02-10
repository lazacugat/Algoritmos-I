#include <stdio.h>
#include <assert.h>
void ordenar(int numero[], int tam)
{
    int i=0,j,aux,k=0;
        while (i<tam)
        {
            j=i+1;
            while (j<tam)
            {
                if (numero[i]>numero[j])
                {
                    aux=numero[i];
                    numero[i]=numero[j];
                    numero[j]=aux;
                }    
                j = j + 1;
            }
            i=i+1;
            
        }

    while (k<tam)
    {
        printf("El orden %d en forma ascendente del arreglo es %d\n",k,numero[k]);
        k=k+1;
    }
}

void pedirArreglo(int numeros[], int tam)
{
    int i=0;
    while (i<tam)
    {
        printf("Ingrese un valor \n");
        scanf("%d", &numeros[i]);
        i=i+1;
    }
}
int main(void)
{
    printf("El programa te hace crear un arreglo y ordena sus elementos de forma ascendente \n");
    int tam;
    printf("Ingresar el tamaño del arreglo \n");
    scanf("%d", &tam);
    assert(tam>0);
    int numeros[tam];
    pedirArreglo(numeros,tam);
    ordenar(numeros,tam);
    return 0;
}
/*La funcion "ordenar" lo que hace es comparar todos los elementos de el arreglo y al menor elemento lo pone en la posicion 0
luego se olvida de el elemento en posicion 0 y busca el menor de todos los siguientes elementos y lo coloca en la posicion 1
y lo mismo sucede hasta terminar de ubicar a todos los elementos en cada una de sus posiciones*/

