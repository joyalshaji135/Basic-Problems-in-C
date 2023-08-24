// Write a program to separate prime and non-prime numbers in separate
// arrays.

#include<stdio.h>
// void PrimeAndNonPrime(int limit,int arr[],int sig[]);
void PrimeAndNonPrime(int limit,int arr[]);
int main()
{
    int arr[100],sig[100];
    int i,limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
        sig[i]=-1;
    }
    //PrimeAndNonPrime(limit,arr,sig);
    PrimeAndNonPrime(limit,arr);
    return 0;
}
// Logic of the Code
void PrimeAndNonPrime(int limit,int arr[])
{
    int i,j,flag;
    int nonprime[100],prime[100];
    for(i=0; i<limit; i++)
    {
        flag=1;
        for(j=2; j<arr[i]; j++)
        {
            if(arr[i]%2==0)
            {
                flag=0;
                nonprime[i]=arr[i];
                printf("Non Prime Numbers : %d\n",nonprime[i]);
                break;
            }
        }
        if(flag==1 && arr[i]!=1)
        {
            prime[i]=arr[i];
            printf("Prime Numbers : %d\n",prime[i]);
        }
    }
}
            // OR
// void PrimeAndNonPrime(int limit,int arr[],int sig[])
// {
//     int i,j,flag;
//     int nonprime[100],prime[100];
//     for(i=0; i<limit; i++)
//     {
//         flag=1;
//         for(j=2; j<arr[i]; j++)
//         {
//             if(arr[i]%2==0)
//             {
//                 flag=0;
//                 nonprime[i]=arr[i];
//                 sig[i]=0;
//                 break;
//             }
//         }
//         if(flag==1 && arr[i]!=1)
//         {
//             prime[i]=arr[i];
//         }
//     }

//     printf("All Prime Numbers :\t");
//     for(i=0; i<limit; i++)
//     {
//         if(sig[i]!=0)
//         {
//             printf("%d\t",prime[i]);
//         }
//     }
//     printf("\nAll Non-Prime Numbers :\t");
//     for(i=0; i<limit; i++)
//     {
//         if(sig[i]!=-1)
//         {
//             printf("%d\t",nonprime[i]);
//         }
//     }
// }
