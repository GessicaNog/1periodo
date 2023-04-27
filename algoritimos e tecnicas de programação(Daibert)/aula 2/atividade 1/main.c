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
    printf("\tResultado -> %d + %d = %d \n", vA, vB, vResultado);

    vResultado = vA * vB;
    printf("\tResultado -> %d * %d = %d \n", vA, vB, vResultado);

    vResultado = vA - vB;
    printf("\tResultado -> %d - %d = %d \n", vA, vB, vResultado);

    if(vB != 0 ){
        vResultado = vA / vB;
        printf("\tResultado -> %d / %d = %d \n", vA, vB, vResultado);
    }else{
        printf("\tDivisor nao pode ser zero");
    }
    return 0;
}

