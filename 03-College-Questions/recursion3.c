#include<stdio.h>
int factorial(int number);
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    int fact = factorial(number);
    printf("Factorial of a number is : %d",fact);
    return 0;
}
int factorial(int num)
{
    int fact;
    if (num <= 1)
    {
        return num;
    }
    else
    {  
        fact = num * factorial(num-1);
        return fact;
    }  
}