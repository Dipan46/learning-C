#include <stdio.h>
int main(int argc, char const *argv[])
{
     int salary, gross;
     printf("Salary: ");
     scanf("%d",&salary);
     //Calculation
     gross=salary+(salary*60/100)-(salary*20/100);
     printf("Gross Salary: %d\n",gross);
     return 0;
}
