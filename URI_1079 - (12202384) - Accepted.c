#include <stdio.h>

int main()
{
    int i,n,result;
    double x,y,z;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%lf%lf%lf", &x, &y, &z);
        double  result= ((x/10)*2 + (y/10)*3 + (z/10)*5);
        printf("%.1f\n", result);
    }
    return 0;
}
