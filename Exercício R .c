#include<stdio.h>
void main()
{
 float A,B,C,VN,VB,TV,a,b,c,vn,vb;
 printf("Votos do candidato A: ");
 scanf("%f",&A);
 printf("Votos do candidato B: ");
 scanf("%f", &B);
 printf("Votos candidato C: ");
 scanf("%f", &C);
 printf("Votos Nulos: ");
 scanf("%f", &VN);
 printf("Votos em Brancos: ");
 scanf("%f", &VB);
 TV=A+B+C+VB+VN;
 printf("Total de votos: %.f \n", TV);
 a=A/TV; a=a*100;
 b=B/TV; b=b*100;
 c=C/TV; c=c*100;
 vn=VN/TV; vn=vn*100;
 vb=VB/TV; vb=vb*100;
 printf("Candidato A: %.2f%% \n", a);
 printf("Candidato B: %.2f%% \n", b);
 printf("Candidato C: %.2f%% \n", c);
 printf("Votos Nulos: %.2f%% \n", vn);
 printf("Votos em Branco: %.2f%% \n", vb);
}