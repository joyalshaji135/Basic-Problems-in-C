#include<stdio.h>
void DisplayEmployee(int emp_id,char emp_name[],int emp_age,char emp_dept[]);
struct employee
{
    int emp_id;
    char emp_name[10];
    int emp_age;
    char emp_dept[10];
};
void ReadEmployee(struct employee e);
int main()
{
    struct employee e1;
    ReadEmployee(e1);
}

void ReadEmployee(struct employee e)
{
    printf("Enter the ID of an Employee :");
    scanf("%d",&e.emp_id);
    printf("Enter the Employee Name :");
    scanf("%s",e.emp_name);
    printf("Enter the Employee Age :");
    scanf("%d",&e.emp_age);
    printf("Enter the Employee Department :");
    scanf("%s",e.emp_dept);
    DisplayEmployee(e.emp_id,e.emp_name,e.emp_age,e.emp_dept);
}

void DisplayEmployee(int emp_id,char emp_name[],int emp_age,char emp_dept[])
{
    printf("Employee ID : %d\n",emp_id);
    printf("Employee Name : %s\n",emp_name);
    printf("Employee Age : %d\n",emp_age);
    printf("Employee Department : %s\n",emp_dept);
}

