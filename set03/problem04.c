/*4. Write a program to find nth number in fibonacci sequence.*/

#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
    int num,fibo;
    num=input();
    fibo=find_fibo(num);
    output(num,fibo);
    return 0;
}

int input()
{
    int n;
    printf("Input the number till you want to print the fibonacci series: ");
    scanf("%d",&n);
    return n;
}

int find_fibo(int n)
{
    int a=0,b=1,sum=0,i=2;
    if (n==0)
    {
        return a;
    }
    if (n==1)
    {
        return b;
    }
    if (n>1)
    {
        for(i=2;i<=n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
    }
    return sum;
}

void output(int n, int fibo)
{
    printf("The value at fibo(%d) is %d",n,fibo);
}