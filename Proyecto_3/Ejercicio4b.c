#include <stdio.h>
int main(void)

{
    int x, y, z, m=0;
    printf("Insertar un valor para x\n");
    scanf("%d", &x);
    printf("Insertar un valor para y\n");
    scanf("%d", &y);
    printf("Insertar un valor para z\n");
    scanf("%d", &z);
    printf("Insertar un valor para m\n");
    scanf("%d", &m);
    if (x<y)
    {
        m = x;
    }
    else
    {
        m = y;
    }
    if (m<z)
    {
        m = m;
    }
    else
    {
        m = z;
    }
    printf("    La variable x es : %d\n", x);
    printf("    La variable y es : %d\n", y);
    printf("    La variable z es : %d\n", z);
    printf("    El menor valor de las variables es : %d\n", m);
    return 0;
}