#include<stdio.h>
int sum(int number);
int main()
{
    int number;
    printf("Enter the Number: ");
    scanf("%d",&number);
    int total;
    total = sum(number);
    printf("Sum of number is : %d",total);
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
        s = num + sum(num-1);
        return s;
    }
}