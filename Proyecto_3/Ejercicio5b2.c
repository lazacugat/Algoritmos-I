#include <stdio.h>
#include <stdbool.h>
int main(void)

{
    int x, i=2;
    bool res=true;
    printf("Insertar un valor para x\n");
    scanf("%d", &x);
    while (i<x && res)
    {
        res = res && (x % i != 0);
        i = i + 1;
    }
    printf("    El valor de x es igual a : %d\n",x);
    printf("    El valor de i es igual a : %d\n",i);
    printf("    El valor de res es igual a : %d\n",res);    
    printf("    El valor x es un numero primo : %d\n",res);
    return 0;
}