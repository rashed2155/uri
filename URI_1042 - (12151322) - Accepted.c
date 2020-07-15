#include <stdio.h>
int main()
{
    int a,b,c,main,x,y,z;
    scanf("%d %d %d", &a,&b,&c);
    x = a;
    y = b;
    z = c;
    if (a > b) {main=a; a=b; b=main;}
    if (a > c) {main=a; a=c; c=main;}
    if (b > c) {main=b; b=c; c=main;}

    printf("%d\n%d\n%d\n", a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n", x,y,z);

    return 0;
}
