// Write a program to find the two repeating elements in a given array.

#include<stdio.h>
void ReatedElement(int limit,int arr[]);
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
    ReatedElement(limit,arr);
    return 0;
}
// Logic of the Code
void ReatedElement(int limit,int arr[])
{
    int i,j,count;
    for(i=0; i<limit; i++)
    {
        if(arr[i]!=-1)
        {
            count=1;
                for(j=i+1; j<limit; j++)
                {
                    if(arr[i]==arr[j])
                    {
                        count++;
                        arr[j]=-1;
                        break;
                    }
                }
                if(count==2)
                {
                    printf("%d\t",arr[i]);
                }
                // printf("%d\t",count);
        }
    }
}