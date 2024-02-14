#include<stdio.h>
int sum(int num);
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    int total = sum(number);
    printf("Sum of two number : %d",total);
    return 0;
}
int sum(int num)
{
    int s = 0;
    if(num <= 1)
    {
        return num;
    }
    else
    {
        printf("before number : %d\n",num);
        s = num+sum(num-1);
        printf("after number : %d\n",num);
        return s;
    }
}