// Write a program to find the count of unique elements in an array and also
// find its sum.

#include<stdio.h>
int main()
{
    int arr[100],unique[100];
    int i,j,limit,sum=0,flag,count=0;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    //Logic of the Code
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
                sum=sum+arr[i];
                count++;
            }
        }
    }
    printf("Unique Elements Count : %d\n",count);
    printf("Sum of Unique Elements : %d",sum);
    return 0;
}
