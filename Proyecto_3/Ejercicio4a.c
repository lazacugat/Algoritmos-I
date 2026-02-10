#include <stdio.h>
int main (void)

{
    int x, y;
    printf("Ejercicio 1e)-1f) \n");
    printf("Insertar un valor para x\n");
    scanf("%d", &x);
    printf("Insertar un valor para y\n");
    scanf("%d", &y);  
    if (x>=y)
    {
        x=0;
    }
    else 
    {
        x=2;
    }
    printf("    x es igual a : %d\n", x);
    printf("    y es igual a : %d\n", y); 
    return 0;
}

