#include<stdio.h>
void main ()
{
    float A,B,D,Q;
    printf("Variavel A: ");
    scanf("%f", &A);
    printf("Variavel B: ");
    scanf("%f", &B);
    D=A/B;
    printf("Divisao A/B: %.1f \n", D);
    Q=D*D;
    printf("Quadrado da divisao: %.1f", Q);
}
