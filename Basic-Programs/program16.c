// Write a program to replace multiples of 5 with # and replace the numbers
// which are divisible by 7 with ‘+’

#include<stdio.h>
void MultFivAndDiviSeven(int size,int arr[]);
int main()
{
    int arr[100];
    int i,limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    MultFivAndDiviSeven(limit,arr);
    return 0;
}
// Logic of the Code
void MultFivAndDiviSeven(int size,int arr[])
{
    char newarr[100];
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i]%5==0)
        {
            arr[i]=-1;
            newarr[i]='#';
        }
        if(arr[i]%7==0)
        {
            arr[i]=-1;
            newarr[i]='+';
        }
    }
    printf("\nRepalce New Array :");
    for(i=0; i<size; i++)
    {
        if(arr[i]!=-1)
        {
            printf("%d\t",arr[i]);
        }
        if(arr[i]==-1)
        {
            printf("%c\t",newarr[i]);
        }
    }
}