// Write a program to count the frequency of each element of an array.

#include<stdio.h>
void FrequencyArray(int limit,int arr[],int freq[]);
int main()
{
    int arr[100],frequency[100];
    int limit,i;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
        frequency[i]=-1;
    }
    FrequencyArray(limit,arr,frequency);
}
// Logic of the Code
void FrequencyArray(int limit,int arr[],int frequency[])
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
            if(frequency[i]==-1)
            {
                frequency[i]=count;
            }
        }       
    }
    for(i=0; i<limit; i++)
    {
        if(frequency[i]!=-1 && arr[i]!=-1)
        {
            printf("%d frequency is %d\n",arr[i],frequency[i]);
        }
    }
}