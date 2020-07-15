#include <stdio.h>
int main()
{
    int i, n, S =0, R = 0, C = 0,l, total;
    char c;
    double x,y,z;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %c", &l, &c);
        if (c == 'S') S+=l;
        else if (c == 'R') R+=l;
        else C+=l;
    }
    total = S + R + C;
    x = (C*100.0)/total;
    y = (R*100.0)/total;
    z = (S*100.0)/total;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %%\n", x);
    printf("Percentual de ratos: %.2f %%\n", y);
    printf("Percentual de sapos: %.2f %%\n", z);

    return 0;
}
