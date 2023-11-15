// Write a Program to Generate The multiplication table

#include<stdio.h>
int main()
{
    int i,mul;
    printf("Enter the Multiplication Table Number :");
    scanf("%d",&mul);
    printf("Multiplication Table %d is :\n",mul);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",i,mul,(i*mul));
    }
    return 0;
}