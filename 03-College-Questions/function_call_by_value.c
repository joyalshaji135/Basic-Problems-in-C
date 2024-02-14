// Call by value

#include<stdio.h>
void Call_by_value(int num1,int num2);
int main()
{
    int a,b;
    printf("Enter the Numbers");
    scanf("%d%d",&a,&b);
    printf("Before Swapping (Main Function) Values a = %d and b = %d\n",a,b);
    Call_by_value(a,b);
    printf("After Swapping (Main Function) Values a = %d and b = %d\n",a,b);
    return 0;
}

void Call_by_value(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping (Main Function) Values a = %d and b = %d\n",a,b);
}