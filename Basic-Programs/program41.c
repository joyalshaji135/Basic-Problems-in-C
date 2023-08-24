// Write a program to delete an element at a specific position from an array

#include<stdio.h>
void DeleteArray(int limit,int position,int arr[]);
int main()
{
    int arr[100];
    int i,limit,position;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);    
    }
    printf("Enter the Specific Position :");
    scanf("%d",&position);
    DeleteArray(limit,position,arr);
    return 0;
}
// Logic of the Code
void DeleteArray(int limit,int pos,int arr[])
{
    int i,j;
    for(i=0; i<limit; i++)
    {
        if(i==pos-1)
        {
            for(j=i; j<limit; j++)
            {
                arr[j]=arr[j+1];
            }
            limit--;
        }
    }
    printf("\nNew Array :");
    for(i=0; i<limit; i++)
    {
       printf("%d\t",arr[i]);
    }
}

// OR

// void DeleteArray(int limit,int pos,int arr[])
// {
//     int i;
//     for(i=pos-1; i<limit; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     limit--;
//     printf("\nNew Array :");
//     for(i=0; i<limit; i++)
//     {
//        printf("%d\t",arr[i]);
//     }
// }
