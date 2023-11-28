/*5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.*/

#include <stdio.h>
#include <math.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Input the size of the array: ");
    scanf("%d",&n);
    return n;
}

void init_array(int n, int a[n])
{
    int j=2;
    for(int i=0;i<n;i++)
    {
        a[i]=j;
        j++;
    }
}

void erotosthenes_sieve(int n, int a[n])
{  
    for(int i=0;i<n;i++)
    {
        if (a[i]!=0)
        {
            for(int j = pow(a[i], 2); j <= n; j = j + a[i])  
            {  
                a[j] = 0;  
            }  
        }  
        }
    
}  

void output(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ,",i);
        }
    }
}