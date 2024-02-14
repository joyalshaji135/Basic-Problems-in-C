#include <stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("Enter the String :");
    scanf("%s",name);
    for (int i = 0; name[i]!='\0'; i++)
    {
        if (name[i]>='a'&&name[i]<='z')
        {
            name[i] = name[i] - 32;
        }  
    }
    printf("%s",name);

    return 0;
}
