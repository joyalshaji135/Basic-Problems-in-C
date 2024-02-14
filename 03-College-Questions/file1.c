#include<stdio.h>
#include<conio.h>
void FileWrite();
void FileCreate();
void WriteOp();
void ReadOp();
int main()
{ 
    FileCreate();
    FileWrite();
    WriteOp();
    ReadOp();
return 0;
}

void FileCreate()
{
    FILE *fptr;

// Create a file
fptr = fopen("filename1.txt", "a");

// File Close
fclose(fptr);
}

void FileWrite()
{
    FILE *fp;
    fp = fopen("filename2.txt","a");
    fprintf(fp,"Hello World");
    fclose(fp);
}

void WriteOp()
{
    FILE *fp1;
    char name[100];
    fp1 = fopen("filename3.txt","a");
    printf("Enter the String :");
    scanf("%s",name);
    fprintf(fp1, name);
    fclose(fp1);
}

void ReadOp()
{
    FILE *fp3;
    char sname[100];
    fp3 = fopen("filename4.txt","a");
    printf("Enter the Name is :");
    scanf("%s",sname);
    fprintf(fp3,sname); 
    fclose(fp3); 
}