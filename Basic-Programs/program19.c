// Write a program to find the most repeated element in an array

#include<stdio.h>
int MostRepeated(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit,i,repeated_element;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    repeated_element=MostRepeated(limit,arr);
    printf("Most Repeated Element in an Array : %d",repeated_element);
    return 0;
}
// Logic of the Code
int MostRepeated(int limit,int arr[])
{
    int i,j,count,max_count=0,most_repeated_element;
    for(i=0; i<limit; i++)
    {
        if (arr[i]!=-1)
        {
            count=0;
                for(j=i+1; j<limit; j++)
                {
                    if(arr[i]==arr[j])
                    {
                        count++;
                        arr[j]=-1;
                    }
                }
                if(count>max_count)
                {
                    max_count=count;
                    most_repeated_element=arr[i];
                }
        }
    }
    return most_repeated_element;
}