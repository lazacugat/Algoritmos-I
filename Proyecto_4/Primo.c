#include <stdio.h>
#include <stdbool.h>

bool esprimo(int x)
{
    int i=2;
    bool res=true;
    while (i<x && res)
    {
        res = res && (x % i != 0);
        i = i + 1;
    }  
    return res;
}

int iesimo_primo(int N)
{
    int i=0,x=2;
    while (N>i)
    {
        if (esprimo(x))
        {
            i=i+1;
            if (N>i)
            {
                x=x+1;
            }
        }
        else
        {
            if (N>i)
            {
                 x=x+1;
            }
        }
    }
    printf("El primo en la posicion '%d' es %d\n", N, x);
    return 0;
}

int main(void)
{
    printf("El programa devuelve el primo colocado en la posicion indicada\n");
    int N;
    while (N<1)
    {
    printf("Ingresar un numero mayor o igual a 1\n");
    scanf("%d", &N);   
    }
    iesimo_primo(N);
    return 0;
}