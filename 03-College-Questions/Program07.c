// frequency of digits

#include<stdio.h>
int main()
{
    int number,count,temp,rem1,rem2;
    printf("Enter the Digits :");
    scanf("%d",&number);
    temp = number;
    while (number > 0)
    {
        count = 1;
        rem1 = number % 10;
        temp = number / 10;
        while (temp > 0)
        {
            rem2 = temp % 10;
        }
        number = number / 10;
    }
    
}