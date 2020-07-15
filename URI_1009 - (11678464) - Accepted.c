#include <stdio.h>
int main()
{
    double fixed_salary,total_sell,total_salary;
    char name[25];
    scanf("%s",&name);
    scanf("%lf",&fixed_salary);
    scanf("%lf",&total_sell);
    total_salary=(total_sell*.15)+fixed_salary;
    printf("TOTAL = R$ %.2lf\n",total_salary);
    return 0;


}
