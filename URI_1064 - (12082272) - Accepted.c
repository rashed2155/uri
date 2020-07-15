#include <stdio.h>
int main()
{
    double a,b=0,c;
    int i,y=0;
    for (i=1; i<=6; i++)
    {
        scanf("%lf", &a);
        if (a>=0)
        {
            y++;
            b+=a;
        }
    }
    c=b/y;
    printf("%d valores positivos\n",y);
    printf("%.1lf\n",c);

    return 0;
}

