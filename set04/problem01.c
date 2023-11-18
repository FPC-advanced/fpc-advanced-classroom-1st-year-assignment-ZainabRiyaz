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
    int c,gcd,lcm;
    /*finding lcm*/
    if (den1>den2)
    {
        while(den2!=0)
        {
            c=den1%den2;
            den1=den2;
            den2=c;
        }
    }
    else if(den2>den1)
    {
        while(den1!=0)
        {
            c=den2%den2;
            den2=den1;
            den1=c;
        }
    }
    if (den2==0)
    {
        gcd=den1;
    }
    else if (den1==0)
    {
        gcd=den2;
    }
    res_den=(den1*den2)/gcd;
    *res_num=num1+num2;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}