#include <stdio.h>
int main()
{
    int a,b,c,max_values;
    scanf("%d%d%d",&a,&b,&c);
    max_values=a;
    if(b>max_values)
        max_values=b;
    if(c>max_values)
        max_values=c;
    printf("%d eh o maior\n",max_values);

    return 0;
}
