#include<stdio.h>
#include<stdbool.h>
int main (void)

{
    int x=4, y=-4, z=8;
    bool b=true, w=true;
    printf("Cuando x=4, y=-4, z=8, b=true y w=true \n");
    printf("    x %% 4 == 0 es : %d\n", x % 4 == 0);
    printf("    x + y == 0 && y - x == -1 * z es : %d\n", x + y == 0 && y - x == -1 * z);
    printf("    !b && w es : %d\n", !b && w);
    return 0;
}