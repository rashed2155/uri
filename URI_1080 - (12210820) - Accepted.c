#include <stdio.h>
int main()
{
    int i, n, p, j=0;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &n);
            if (n > j)
            {
                j=n;
                p=i;
            }

    }
    printf("%d\n", j);
    printf("%d\n", p);

    return 0;
}
