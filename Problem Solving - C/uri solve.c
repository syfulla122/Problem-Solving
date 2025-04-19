/*#include<stdio.h>
int main()
{
  int A,B,sum;
  scanf("%d%d",&A,&B);
  sum=A+B;
  printf("X = %d\n",sum);
  return 0;

}*/

/*#include<stdio.h>
#define pie 3.14159
int main()
{
    double R,A;
    scanf("%lf",&R);
    A=pie*R*R;
    printf("A=%.4lf",A);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int A,B,SOMA;
    scanf("%d%d",&A,&B);
    SOMA = A+B;
    printf("SOMA = %d",SOMA);
    return 0;

}*/


/*#include<stdio.h>
int main()
{
    int A,B,PROD;
    scanf("%d%d",&A,&B);
    PROD = A*B;
    printf("PROD = %d\n",PROD);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    double A,B,MEDIA;
    scanf("%lf%lf",&A,&B);
    MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %lf",MEDIA);
    return 0;

}*/


/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d eh o maior\n",a);
    }
    else if(b>c)
    {
        printf("%d eh o maior\n",b);
    }
    else
    {
        printf("%d eh o maior\n",c);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int X;
    double Y,M;
    scanf("%d%lf",&X,&Y);
    M = X/Y;
    printf("%.3lf km/l\n",M);
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,d;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("%.4lf\n",d);
    return 0;

}*/

/*#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    double f = (a*b)/12.0;
    printf("%.3lf\n",f);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int x,a,b,c,d,e,f,g;
    scanf("%d",&x);
    printf("%d\n",x);
    a=x/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    b=x%100;
    a=b/50;
    printf("%d nota(s) de R$ 50,00\n",a);
    c=b%50;
    a=c/20;
    printf("%d nota(s) de R$ 20,00\n",a);

    d=c%20;
    a=d/10;
    printf("%d nota(s) de R$ 10,00\n",a);
    e=d%10;
    a=e/5;
    printf("%d nota(s) de R$ 5,00\n",a);
    f=e%5;
    a=f/2;
    printf("%d nota(s) de R$ 2,00\n",a);
    g=f%2;
    a=g/1;
    printf("%d nota(s) de R$ 1,00\n",a);


    return 0;
}*/

/*#include<stdio.h>
int main()
{
  double A,B,C,MEDIA;
  scanf("%lf%lf%lf",&A,&B,&C);
  MEDIA = ((A*2)+(B*3)+(C*5))/(2+3+5);
  printf("MEDIA = %.1lf\n",MEDIA);
  return 0;


}*/

/*#include<stdio.h>
int main()
{
    int A,B,C,D,DIFERENCA;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    DIFERENCA = ((A *B)-(C*D));
    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}*/
/*#include<stdio.h>
#define pi 3.14159
int main()
{
    double R,VOLUME;
    scanf("%lf",&R);
    VOLUME =  (4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3lf",VOLUME);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int n,a;
    float b,SALARY;
    scanf("%d%d%f",&n,&a,&b);
    SALARY = a*b;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2f",SALARY );
    printf("\n");
    return 0;
}*/
/*#include<stdio.h>
#define pi 3.14159
int main()
{
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf%lf%lf",&A,&B,&C);
    TRIANGULO = 0.5*C*A;
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    CIRCULO = pi*C*C;
    printf("CIRCULO: %.3lf\n",CIRCULO);
    TRAPEZIO = ((A+B)/2)*C;
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    QUADRADO = B*B;
    printf("QUADRADO: %.3lf\n",QUADRADO);
    RETANGULO = A*B;
    printf("RETANGULO: %.3lf\n",RETANGULO);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int d,a,b,c;
    scanf("%d",&d);
    a=d/365;
    printf("%d ano(s)\n",a);
    b=d%365;
    a=b/30;
    printf("%d mes(es)\n",a);
    c=b%30;
    printf("%d dia(s)\n",c);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int c1,c2,u1,u2;
    double p1,p2,s;
    scanf("%d%d%lf",&c1,&u1,&p1);
    scanf("%d%d%lf",&c2,&u2,&p2);
    s = ((u1*p1)+(u2*p2));
    printf("VALOR A PAGAR: R$ %.2lf\n",s);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int N,a,b,c;
    scanf("%d",&N);
    b = N%60;
    a = b/60;
    a = N/60;
    c = N%60;
    printf("%d:%d:%d\n",b,a,c);
    return 0;


}














