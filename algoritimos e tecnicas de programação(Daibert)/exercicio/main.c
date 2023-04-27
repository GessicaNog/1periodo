#include <stdio.h>

int main()

{

    int X, Y, Z;

    scanf("%d %d %", &X, &Y, &Z);

    if ((X > Y) && (Y * Z < X))

        printf("%d", Z * Y);

    else

        printf("%d", X + Z * Y);

    return 0;
