// Frequency of Elements in an array 

#include<stdio.h>
int main()
{
    int arr[100],fre[100];
    int limit,i,j,count;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
        fre[i] = -1;
    }
    
    for ( i = 0; i < limit; i++)
    {
        count=1;
        for ( j = i+1; j < limit; j++)
        {
            if (arr[i] ==  arr[j])
            {
                count++;
                fre[j] = 0;
            }
        }
        if (fre[i] != 0)
        {
            fre[i] = count;
        }  
    }
    printf("Repeating of Elements List :\n");
    for ( i = 0; i < limit; i++)
    {
        if (fre[i] != 0)
        {
            printf("%d Element is %d - time are Repeating\n",arr[i],fre[i]);
        }   
    }
    return 0;  
}