// Write a program to count the total number of unique elements in an array

#include<stdio.h>
int UniqueElements(int limit,int arr[]);
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
    int count=UniqueElements(limit,arr);
    printf("Unique Elements Count : %d",count);
    return 0;
}
// Logic of the Code
int UniqueElements(int limit,int arr[])
{
    int i,j,flag,count=0;
    for(i=0; i<limit; i++)
    {
        if(arr[i]!=-1)
        {
            flag=1;
                for(j=i+1; j<limit; j++)
                {
                    if(arr[i]==arr[j])
                    {
                        flag=0;
                        arr[j]=-1;
                        break;
                    }
                }
                if(flag==1)
                {
                    count++;
                }
        }
    }
    return count;
}