#include <stdio.h>
#include <math.h>

int main() {
    float valorParcela, valorPrincipal, taxaDeJurosAnual, taxaDeJurosMensal;
    int numeroParcelas;

    printf("Valor principal: \n");
    scanf("%f", &valorPrincipal);

    printf("Taxa de juros (em percentual, por exemplo, 10 para 10%%): \n");
    scanf("%f", &taxaDeJurosAnual);
    taxaDeJurosMensal = taxaDeJurosAnual / 100 / 12; 

    printf("Numero de parcelas: \n");
    scanf("%d", &numeroParcelas);

    // Calcula o valor da parcela usando a fórmula de financiamento com juros compostos
    // PMT = (PV * i) / (1 - (1 + i)^-n)
    // Onde:
    // PV é o valor principal
    // i é a taxa de juros por período (mensal)
    // n é o número de parcelas
    valorParcela = (valorPrincipal * taxaDeJurosMensal) / (1 - pow(1 + taxaDeJurosMensal, -numeroParcelas));

    printf("Valor da parcela: %.2f\n", valorParcela);

    return 0;
}
