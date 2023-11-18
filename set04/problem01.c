/*1. Write a program to find sum of two fractions*/

#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
    int n1,d1,n2,d2,nr,dr;
    input(&n1,&d1,&n2,&d2);
    add(n1,d1,n2,d2,&nr,&dr);
    output(n1,d1,n2,d2,nr,dr);
    return 0;
}

void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the first numerator: ");
    scanf("%d",num1);
    printf("Enter the first denominator: ");
    scanf("%d",den1);
    printf("Enter the second numerator: ");
    scanf("%d",num2);
    printf("Enter the second denominator: ");
    scanf("%d",den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    int max,m1,m2;
    if (den1>den2)
    {
        max=den1;
    }
    else
    {
        max=den2;
    }
    while(1)
    {
    if(max%den1==0 && max%den2==0)
    {
        res_den=max;
        break;
    }
    else{
        max++;
    }
    }
    m1=max/den1;
    m2=max/den2;
    num1=num1*m1;
    num2=num2*m2;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}