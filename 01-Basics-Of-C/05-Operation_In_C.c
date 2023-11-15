// Basic Operation in C

#include<stdio.h>

int main()
{
    int num1,num2;
    int addition,subtraction,multiplication,division,mod;
    printf("Enter the Number :");
    scanf("%d%d",&num1,&num2);
    
    // Binary Operation in C

    // 1) Arithematic Operation in C 
    
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    mod = num1 % num2;
    printf("Addition of a Two Number is : %d\n",addition);
    printf("Subtraction of a Two Number is : %d\n",subtraction);
    printf("Multiplication of a Two Number is : %d\n",multiplication);
    printf("Division of a Two Number is : %d\n",division);
    printf("Mod of a Two Number is : %d\n",mod);
    
    // 2) Logical Operation in C
    
    printf("True-1 Or False-0 :%d\n",addition&&addition);
    printf("True-1 Or False-0 :%d\n",addition||subtraction);
    printf("True-1 Or False-0 :%d\n",addition!=subtraction);

    // 3) Assignment Operation in C

    num1 = num2;
    printf("num1 is num2 : %d\n",num1);
    num1+=num1;
    printf("num1 is %d",num1);
    return 0;
}