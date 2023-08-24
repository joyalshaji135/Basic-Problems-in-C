// Write a program to move all zeros(0’s) to the end of a given array.

#include<stdio.h>
void MoveAllZero(int limit,int arr[]);
int main()
{
    int i,limit;
    int arr[100];
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    MoveAllZero(limit,arr);
    return 0;
}
// Logic of the Code
void MoveAllZero(int limit,int arr[])
{
    int i,index=0;
    // 0 3 2 8 0 1 5 0   limit = 8
    for(i=0; i<limit; i++)
    {
        if(arr[i]!=0)
        {
            arr[index++]=arr[i];  // 1=>3 2=>2 3=>8 4=>1 5=>5
        }
    }
    while (index<limit)  // 5 < 8 || 6 < 8 || 7 < 8 || 8 < 8 ==> False
    {
        arr[index++]=0;  // 5 => 0   6 => 0   7 => 0 
    }
    
    printf("Move all Zeros End of the Array : \t");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}