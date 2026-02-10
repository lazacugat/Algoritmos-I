#include <stdio.h>
int main(void)

{
    int x, y, i=0;
    printf("Insertar un valor para x\n");
    scanf("%d", &x);
    printf("Insertar un valor para y\n");
    scanf("%d", &y);
    while (x>=y)
    {
        x=x-y;
        i=i+1;
    }
    printf("    El valor de x es igual a : %d\n",x);
    printf("    El valor de y es igual a : %d\n",y);
    printf("    El valor de i es igual a : %d\n",i);
    printf("    El valor del resto de la division de x por y es igual a : %d\n",x);
    printf("    El valor del divisor de la division de x por y es igual a : %d\n",y);
    printf("    El valor del cociente de la division de x por y es igual a : %d\n",i);  
    return 0;
}