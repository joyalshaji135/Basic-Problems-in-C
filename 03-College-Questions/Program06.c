// Digit Largest number and Second Largest Number

#include<stdio.h>
int main()
{
    int number,rem,largest,second_largest;
    printf("Enter the Digit :");
    scanf("%d",&number);
    largest = 0;
    second_largest = 0;
    while (number>0)
    {
        rem = number%10;
        number = number/10;
        if(largest<rem)
        {
        second_largest=largest;
        largest=rem;
        }
        else if(second_largest<rem)
        {
        second_largest=rem;
        }
    }
    printf("%d is a second largest number",second_largest);
    printf("%d is a largest number",largest);
    return 0;
}