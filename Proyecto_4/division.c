#include <stdio.h>
#include <assert.h>
struct div_t 
{
int cociente;
int resto;
};
int pedirEntero(void)
{
    int x;
    printf("Ingresar un valor para el dividendo y luego para el divisor\n");
    scanf("%d", &x);
    assert(x>=0);
    return x;
}
typedef struct
{
    int cociente;
    int resto;
}div_t;


div_t division(int dividendo,int divisor)
{
    int i=0;
    div_t var;
        while (dividendo>=divisor)
    {
        dividendo=dividendo-divisor;
        i=i+1;
    }
    var.resto= dividendo;
    var.cociente= i;
    return var; 
};
int main(void)
{
    div_t res;
    printf("El programa toma un dividendo y luego un divisor y nos devuelve el resto y el cociente\n");
    printf("Los valores del divisor y dividendo deben ser mayores o iguales a 0 \n");
    int divisor, dividendo;
    dividendo=pedirEntero();
    divisor=pedirEntero();
    res=division(dividendo,divisor);
    printf("El cociente es %d\n", res.cociente);
    printf("El resto es %d\n", res.resto);
    return 0;
}