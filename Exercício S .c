#include<stdio.h>
void main()
{
 float A,B, soma_ab, subtracao_ab, multiplicacao_ab, divisao_ab;
 printf("Variavel A: ");
 scanf("%f", &A);
 printf("Variavel B: ");
 scanf("%f", &B);
 soma_ab=A+B;
 subtracao_ab=A-B;
 multiplicacao_ab=A*B;
 divisao_ab=A/B;
 printf("Soma A + B = %.2f \n", soma_ab);
 printf("Subtracao A - B = %.2f \n", subtracao_ab);
 printf("Multiplicacao A • B = %.2f \n", multiplicacao_ab);
 printf("Divisao A ÷ B = %.2f \n", divisao_ab);
}