#include <stdio.h>
int main()
{
    int x,i,c1=0,c2=0,c3=0,c4=0;
    for (i=1; i<=5; i++)
    {
        scanf("%d",&x);
        if (x%2 == 0) c1=c1+1;
        if (x%2 ==1 || x%2==-1) c2=c2+1;
        if (x>0) c3=c3+1;
        if (x<0) c4=c4+1;

    }
    printf("%d valor(es) par(es)\n",c1);
    printf("%d valor(es) impar(es)\n",c2);
    printf("%d valor(es) positivo(s)\n",c3);
    printf("%d valor(es) negativo(s)\n",c4);


    return 0;
}
