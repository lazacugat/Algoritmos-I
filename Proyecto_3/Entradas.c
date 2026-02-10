#include <stdio.h>

int pedirEntero(void)
{
    int x;
    printf("Ingresar un valor para x\n");
    scanf("%d", &x);
    return x;
}
void imprimeEntero(int x)
{
    printf("El resultado es : %d\n",x);
}
int main(void)
{
    imprimeEntero(pedirEntero());
    return 0;
}
