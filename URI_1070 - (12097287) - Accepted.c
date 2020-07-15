#include <stdio.h>
int main()
{
    int i,x,cnt=0;
    scanf("%d",&x);
    for (i=x; cnt<12; i++)
    {
        if (i%2 == 1)
            printf("%d\n",i);
        cnt++;
    }
    return 0;

}
