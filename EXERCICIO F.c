#include<stdio.h>
void main()
{
    float a, b, aux;
    scanf("%f", &a);
    scanf("%f", &b);
    aux=a;
    a=b;
    b=aux;
    printf("%.1f, %.1f", a,b);
}
