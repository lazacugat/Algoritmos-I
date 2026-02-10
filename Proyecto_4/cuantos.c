#include <stdio.h>
#include <assert.h>
struct comp_t {
int menores;
int iguales;
int mayores;
};
typedef struct 
{
    int menores;
    int iguales;
    int mayores;
}comp_t;
comp_t cuantos(int a[], int n_max, int i)
{
    comp_t cant;
    int k=0;
    cant.iguales=0;
    cant.mayores=0;
    cant.menores=0;
    while (k<n_max)
    {
        if (i==a[k])
        {
            cant.iguales = cant.iguales +1;
            k=k+1;
        }
        if (i<a[k])
        {
            cant.mayores =cant.mayores +1;
            k=k+1;
        }
        if (i>a[k])
        {
            cant.menores=cant.menores+1;
            k=k+1;
        }
    }
    return cant;
      
}

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

int main(void)
{
    int n_max;
    printf("Ingresar el tamaño del arreglo \n");
    scanf("%d", &n_max);
    assert(n_max>0);
    int a[n_max];
    pedirArreglo(a,n_max);
    int i;
    printf("Ingresar un valor para ver cuantos elementos menores,iguales y mayores a ese numero hay\n");
    scanf("%d", &i);
    comp_t cant;
    cant= cuantos(a,n_max,i);
    printf("La cantidad de numeros menores a %d es %d \n",i,cant.menores);
    printf("La cantidad de numeros iguales a %d es %d \n",i,cant.iguales);
    printf("La cantidad de numeros mayores a %d es %d \n",i,cant.mayores);  
    return 0;
}
