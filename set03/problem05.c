/*5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.*/

#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    return n;
}

void init_array(int n, int a[n])
{
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=i;
    }
    
}

void erotosthenes_sieve(int n, int a[n])
{
    for(int i=2;i<n;i++)
    {
        printf("%d",a[i]);
    }
}







