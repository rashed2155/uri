#include <stdio.h>
int main()
{
    int a,b,i,sum=0,sum2=0;
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        for (i=b; i<=a; i++)
        {
            if (i % 13 != 0)
            {
                sum+=i;
            }
        }
        printf("%d\n", sum);
    }
    else if (a<b)
    {
        for (i=a; i<=b; i++)
        {
            if (i % 13 != 0)
            {
                sum2+=i;
            }
        }
        printf("%d\n",sum2);
    }

    return 0;
}
