/*5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.*/

#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    init_array(n,a[n]);
    erotosthenes_sieve(n,a[n]);
    output(n,a[n]);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    return n;
}

void init_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    printf(a[n]);
}

void erotosthenes_sieve(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]%a[i]==0)
            {
                a[j]=0;
            }
        }
    }
}

void output(int n, int a[n])
{
    printf("The prime numbers are: ");
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
        }
        else
        {
            continue;
        }
    }

}


