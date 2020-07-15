#include <stdio.h>

int main()
{
    int x,i,a,in=0,out=0;
    scanf ("%d",&x);
    for (i=1; i<=x; i++)
    {
        scanf("%d", &a);
        if (a>=10 && a<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);

    return 0;
}
