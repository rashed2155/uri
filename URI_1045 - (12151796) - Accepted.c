#include <stdio.h>
int main()
{
    double a,b,c,i,j,k,main;
    scanf("%lf %lf %lf", &a,&b,&c);
    if (a < b) {main=a; a=b; b=main;}
    if (a < c) {main=a; a=c; c=main;}
    if (b < c) {main=b; b=c; c=main;}
    i= (a*a);
    j= (b*b);
    k= (c*c);
    if (a >= b+c) printf("NAO FORMA TRIANGULO\n");
    else {
    if (i == j+k) printf("TRIANGULO RETANGULO\n");
    if (i > j+k) printf("TRIANGULO OBTUSANGULO\n");
    if (i < j+k) printf("TRIANGULO ACUTANGULO\n");
    if (a==b && b==c) printf("TRIANGULO EQUILATERO\n");
    else if (a==b || b==c || c==a) printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
