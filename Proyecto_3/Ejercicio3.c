#include <stdio.h>
#include <assert.h>
int main(void)

{
    int x, y;
    printf("Ejercicio 1a)\n");
    printf("Insertar un valor para x\n");
    scanf("%d", &x);
    assert (x==1);
    printf("    x es igual a : %d\n", x=5);
    printf("Ejercicio 1b)\n");
    printf("Insertar un valor para x\n");
    scanf("%d", &x);
    printf("Insertar un valor para y\n");
    scanf("%d", &y);
    assert(x==2 && y==5);
    printf("    x es igual a : %d\n", x= x+y);         
    printf("    y es igual a : %d\n", y= y+y);
    printf("Ejercicio 1c)\n");
    printf("Insertar un valor para x\n");
    scanf("%d", &x);
    printf("Insertar un valor para y\n");
    scanf("%d", &y);
    assert(x==2 && y==5);
    printf("    x es igual a : %d\n", y= y+y);         
    printf("    y es igual a : %d\n", x= x+y);
    return 0;
}