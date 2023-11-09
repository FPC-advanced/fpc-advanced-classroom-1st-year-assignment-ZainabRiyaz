//2. Write a C program to add two numbers. //

#include <stdio.h>
int main()
{
    int num1,num2,sum=0;
    printf("Please enter the first number: ",&num1);
    scanf("%d",&num1);
    printf("Please enter the second number: ",&num2);
    scanf("%d",&num2);
    sum=num1+num2;
    printf("The sum is %d",sum);
    return 0;
}

