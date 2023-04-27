#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vA, vB, vC, vSoma = 0, vRecebido = 0, vTroco;
    printf("Digite o valor do primeiro produto: ");
    scanf("%d", &vA);
    printf("\n Digite o valor do segundo produto: ");
    scanf("%d", &vB);
    printf("\n Digite o valor do terceiro produto: ");
    scanf("%d", &vC);

    vSoma = vA + vB + vC;
    printf("\n A soma total e: %d", vSoma);
    printf("\n Informe o valor recebido: ");
    scanf("%d",&vRecebido);

    vTroco = vRecebido - vSoma;

    printf("\nO troco sera de: %d", vTroco);
    return 0;

}
