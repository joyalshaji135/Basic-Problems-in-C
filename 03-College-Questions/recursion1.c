#include<stdio.h>
void recursion(int a);
int main()
{
    int number;
    printf("Enter the Number :");
    scanf("%d",&number);
    recursion(number);
}
void recursion(int number)
{
    if (number == 0)
    {
        return;
    }
    else
    {
        printf("Before Recursion: %d\n",number);
        recursion(number-1);
        printf("After Recursion: %d\n",number);
    }
    
}