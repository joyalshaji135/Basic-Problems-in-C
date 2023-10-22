// Write a program to replace multiples of 3 with * and multiples of 7 with #

#include<stdio.h>
void MultOfThreeAndMultSeven(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit,i;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    MultOfThreeAndMultSeven(limit,arr);
    return 0;
}
// Logic of the Code
void MultOfThreeAndMultSeven(int limit,int arr[])
{
    char newarr[100];
    int i;
    for(i=0; i<limit; i++)
    {
        if(arr[i]%3==0)
        {
            arr[i]=-1;
            newarr[i]='*';
        }
        if (arr[i]%7==0)
        {
            arr[i]=-1;
            newarr[i]='#';
        }
    }
    printf("\nReplaced New Array :");
    for(i=0; i<limit; i++)
    {
        if (arr[i]!=-1)
        {
            printf("%d\t",arr[i]);
        }
        if (arr[i]==-1)
        {
            printf("%c\t",newarr[i]);
        }       
    }
}