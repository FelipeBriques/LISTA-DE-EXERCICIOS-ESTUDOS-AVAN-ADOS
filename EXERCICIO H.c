#include<stdio.h>
void main()
{
 float volume, altura, comprimento, largura;
 printf("Valor da ALTURA: ");
 scanf("%f", &altura);
 printf("Valor do COMPRIMENTO: ");
 scanf("%f", & comprimento);
 printf("Valor da LARGURA: ");
 scanf("%f", &largura);
 volume=comprimento*altura*largura;
 printf("O VOLUME eh: %2.f", volume);
}
