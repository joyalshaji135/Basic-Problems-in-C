// Write a program to separate odd and even numbers in separate arrays

#include<stdio.h>
void OddAndEven(int limit,int arr[]);
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
    OddAndEven(limit,arr);
    return 0;
}
//Logic of the Code
void OddAndEven(int limit,int arr[])
{
    int i;
    int even[100],odd[100];
    for(i=0; i<limit; i++)
    {
        if(arr[i]%2==0)
        {
            even[i]=arr[i];
            printf("Even Number : %d\n",even[i]);
        }
        else
        {
            odd[i]=arr[i];
            printf("Odd Number : %d\n",odd[i]);
        }
    }
}

//  OR

// void OddAndEven(int limit,int arr[])
// {
//     int i,even_count=0,odd_count=0;
//     int even[100],odd[100];
//     for(i=0; i<limit; i++)
//     {
//         if(arr[i]%2==0)
//         {
//             even[i]=arr[i];
//             even_count++;
//         }        
//     }
//     for(i=0; i<limit; i++)
//     {
//         if(arr[i]%2!=0)
//         {
//             odd[i]=arr[i];
//             odd_count++;
//         }        
//     }
//     printf("\nEven Number is Separated : ");
//     for(i=0; i<even_count; i++)
//     {
//         printf("%d\t",even[i]);
//     }
//     printf("\nOdd Number is Separated : ");
//     for(i=0; i<odd_count; i++)
//     {
//         printf("%d\t",odd[i]);
//     }
// }
