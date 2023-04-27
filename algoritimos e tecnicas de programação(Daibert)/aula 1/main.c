#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vA,vB,vResultado = 0;
    printf("Digite o primeiro valor: ");
    scanf("%d", &vA);
     printf("Digite o segundo valor: ");
     scanf("%d", &vB);

     vResultado = vA + vB;
     printf("\tResultado\n\n\n%d + %d = %d", vA, vB, vResultado);

    return 0;
}
