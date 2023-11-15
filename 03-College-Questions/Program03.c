// Write a Program to find the sum and count of odd and even using array

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i;
    int sum_odd=0,sum_even=0;
    int count_odd=0,count_even=0;
    printf("Enter the limit of an array:");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < limit; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum_even = sum_even + arr[i];
            count_even++;
        }
        else
        {
            sum_odd = sum_odd + arr[i];
            count_odd++;
        }
    }

    printf("Count of Even : %d\n  Sum of Even : %d\n",count_even,sum_even);
    printf("Count of Odd : %d\n Sum of Odd : %d\n",count_odd,sum_odd);
    return 0;
}