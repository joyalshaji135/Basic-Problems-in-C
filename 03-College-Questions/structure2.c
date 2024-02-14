
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct employee
{
    int emp_id;
    char emp_name[10];
    int age;
};

int main()
{
    struct employee emp[100];
    int limit;
    printf("Enter the Employee Count :");
    scanf("%d",&limit);

    for (int i = 0; i < limit; i++)
    {
        printf("Enter the Employee ID :");
        scanf("%d",&emp[i].emp_id);
        printf("Enter the Employee Name :");
        scanf("%s",emp[i].emp_name);
        printf("Enter the Employee Age :");
        scanf("%d",&emp[i].age);
    }
    
    printf("Display the %d Employees Details :",limit);
    for (int i = 0; i < limit; i++)
    {
        printf("Employee Id : %d\nEmployee Name : %s\nEmployee %d\n",emp[i].emp_id,emp[i].emp_name,emp[i].age);
    }
    return 0;
}