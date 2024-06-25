#include<stdio.h>
void main ()
{
    float valor,prestacao,taxa,tempo;
    printf("VALOR DO PRODUTO: R$ ");
    scanf("%f", &valor);
    printf("VALOR DA TAXA (ja esta em porcentagem): ");
    scanf("%f", &taxa);
    printf("TEMPO (em meses): ");
    scanf("%f", &tempo);
    prestacao=valor+(valor*(taxa/100)*tempo);
    printf("A PRESTACAO SERA: R$ %.2f", prestacao);
}
