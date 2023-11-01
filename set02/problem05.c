/*Write a program to find GCD _(HCF)_ of two numbers.*/

#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a,b,gcd=0;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}

int input()
{
    int num;
    printf("Please enter the number: ");
    scanf("%d",&num);
    return num;
}

int find_gcd(int a, int b)
{
    int c=0;
    if (a>b)
    {
        while(b!=0)
        {
            c=a%b;
            a=b;
            b=c;
        }
    }
    return a;
}

void output(int a, int b, int gcd)
{
    printf("The gcd of the two numbers %d and %d is %d",a,b,gcd);
}





