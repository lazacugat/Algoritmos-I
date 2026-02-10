#include <stdio.h>
int main(void)

{
    int x;
    float y, z;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%f", &y);
    printf("Ingrese un valor para z\n");
    scanf("%f", &z);
    printf("    El resultado de x + y + 1 es : %.1f\n",x + y + 1);    
    printf("    El resultado de z * z + y * 45 - 15 * x es : %.1f\n",z * z + y * 45 - 15 * x);  
    printf("    El resultado de y - 2 == (x * 3 + 1) %% 5 es : %d\n",y - 2 == (x * 3 + 1) % 5);
    printf("    El resultado de y / 2 * x es : %.1f\n",y / 2 * x);  
    printf("    El resultado de y < x * z es : %d\n",y < x *z);
    return 0;
}