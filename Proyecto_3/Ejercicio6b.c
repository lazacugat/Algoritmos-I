#include <stdio.h>
int primo(int x, int y, int z, int m)
{
    if (x<y)
    
        m = x;
    
    else
    
        m = y;
    
    if (m>=z)
    
        m = z;
    
    return m;
}
void imprimeEntero(int x)
{
    printf("El resultado es : %d\n",x);
}
int pedirEntero(void)
{
    int x;
    printf("Ingresar un valor\n");
    scanf("%d", &x);
    return x; 
}
int main(void)
{
    int x, y, z, m;
    x=pedirEntero();
    y=pedirEntero();
    z=pedirEntero();
    m=pedirEntero();
    imprimeEntero(primo(x,y,z,m));
    return 0;
}
