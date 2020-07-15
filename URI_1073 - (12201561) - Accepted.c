#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,result=0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0 && i != 0)
             {
        result = i * i;
        printf("%d^%d = %d\n",i,2, result);
    }

    }

    return 0;
}
