#include <stdio.h>
int main()
{
    int x,y;
    float TOTAL;
    scanf("%d %d",&x,&y);
    float z[5]={4.00,4.50,5.00,2.00,1.50};
    TOTAL = z[x-1]*y;
    printf("Total: R$ %.2f\n", TOTAL);



    return 0;
}
