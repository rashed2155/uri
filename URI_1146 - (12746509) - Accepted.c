#include <stdio.h>
int main()
{
    int n,N, i;
    while(1)
    {
        scanf("%d", &N);
        if (N == 0) break;
        printf("1");
            for (i = 2; i <= N; i++)
                printf(" %d", i);
            printf("\n");
    }
    return 0;
}
