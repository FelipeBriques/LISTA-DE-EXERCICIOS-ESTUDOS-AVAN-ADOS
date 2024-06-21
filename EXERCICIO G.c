#include<stdio.h>
void main()
{
 float A,B,C,D,a,b,c,d,e,f,g,h,i,j,k,l;
 printf("Variavel A: ");
 scanf("%f", &A);
 printf("Variavel B: ");
 scanf("%f", &B);
 printf("Variavel C: ");
 scanf("%f", &C);
 printf("Variavel D: ");
 scanf("%f", &D);
 printf(" \n");
 a=A+B;
 b=A+C;
 c=A+D;
 d=B+C;
 e=B+D;
 f=C+D;
 printf("As somas de cada relacao das variaveis: \n\n");
 printf("A + B = %.f \n",a);
 printf("A + C = %.f \n",b);
 printf("A + D = %.f \n",c);
 printf("B + C = %.f \n",d);
 printf("B + D = %.f \n",e);
 printf("C + D = %.f \n\n",f);
 g=A*B;
 h=A*C;
 i=A*D;
 j=B*C;
 k=B*D;
 l=C*D;
 printf("Os produtos de cada relacao das variaveis \n\n");
 printf("A x B = %.f \n",g);
 printf("A x C = %.f \n",h);
 printf("A x D = %.f \n",i);
 printf("B x C = %.f \n",j);
 printf("B x D = %.f \n",k);
 printf("C x D = %.f \n",l);
}
