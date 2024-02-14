#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Student
{
    int s_id;
    char s_name[100];
    int mark[2];
    int totalmark;
    int rank;
};
void ReadData(struct Student s[],int limit);
void PrepareRankList(struct Student s[],int limit);
void DisplayData(struct Student s[],int limit);
int main()
{
    struct Student s1[100];
    int size;
    printf("Enter the Student Count :");
    scanf("%d",&size);
    ReadData(s1,size);
    PrepareRankList(s1,size);
    DisplayData(s1,size);
    return 0;
}

void ReadData(struct Student s[],int limit)
{
    for (int i = 0; i < limit; i++)
    {
        printf("Enter the Student ID :");
        scanf("%d",&s[i].s_id);
        printf("Enter the Student Name :");
        scanf("%s",s[i].s_name);
        printf("Enter the Mark 1");
        scanf("%d",&s[i].mark[0]);
        printf("Enter the Mark 2");
        scanf("%d",&s[i].mark[1]);
        printf("Enter the Mark 3");
        scanf("%d",&s[i].mark[2]);
        s[i].totalmark = s[i].mark[0]+s[i].mark[1]+s[i].mark[2];
    } 
}

void DisplayData(struct Student s[],int limit)
{
    printf("Display the Student Marks :\n");
    printf("Student id \t Student Name \t Student Total Mark\n");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t\t%s\t\t%d\n",s[i].rank,s[i].s_name,s[i].totalmark);
    }
}

void PrepareRankList(struct Student s[],int limit)
{
    for (int i = 0; i < limit; i++)
    {
        s[i].rank = 1;
    }
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            if (s[i].totalmark < s[j].totalmark)
            {
                s[i].rank++;
            }   
        }  
    }
    
}