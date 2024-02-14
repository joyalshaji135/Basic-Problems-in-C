// Call by reference 

#include<stdio.h>
void swap(int *,int *);
int main()
{
    int num1,num2;
    printf("Enter the Numbers :");
    scanf("%d%d",&num1,&num2);
    printf("Before Swapping Values in Main Function a = %d and b = %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After Swapping Values in Main Function a = %d and b = %d\n",num1,num2);
    return 0;
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After Swapping Values in Swap Function a = %d and b = %d\n",*a,*b);
}