#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void ReadData(int arr[]);
//void Odd_Even();
void WriteData(int limit,int arr[]);
int main()
{
    int arr[100];
    ReadData(arr);
    //Odd_Even();
    return 0;
}

void ReadData(int arr[])
{
    FILE *fp1;
    int limit;
    fp1 = fopen("numberfile.txt","w");
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Array Values Read on Files
    for (int i = 0; i < limit; i++)
    {
        fprintf(fp1,"%d",arr[i]);

    }

    // for (int i = 0; i < limit; i++)
    // {

    //     fscanf(fp1,"%d",&arr[i]);
    // }
    // fscanf(fp1,"%d",&arr);
    WriteData(limit,arr);
    
    fclose(fp1);
    
}

void WriteData(int limit,int arr[])
{
    FILE *fp2;
    fp2 = fopen("numberfile.txt","r");
    int i=0;
    while(fscanf(fp2,"%d",&arr)!=EOF)
    {
        printf("%d\t",arr[i]);
        i++;
    }
        
}