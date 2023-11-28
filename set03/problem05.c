/*5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.*/

#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n+1]);
void erotosthenes_sieve(int n, int a[n+1]);
void output(int n, int a[n+1]);

int main()
{
    int n;
    n=input_array_size();
    int a[n+1];
    init_array(n,a[n+1]);
    erotosthenes_sieve(n,a[n+1]);
    output(n,a[n+1]);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Input the size of the array: ");
    scanf("%d",&n);
    return n;
}

void init_array(int n, int a[n+1])
{
    for(int i=2;i<n;i++)
    {
        a[i]=1;
    }
}

void erotosthenes_sieve(int n, int a[n+1])
{
    for(int i=2;i<n;i++)
    {
        if(a[i]==1)
        {
            for(int j=2;i*j<n;j++)
            {
                a[i*j]=0;
            }
        }
    }
}

void output(int n, int a[n+1])
{
    for(int i=2;i<n+1;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",i);
        }
    }
}