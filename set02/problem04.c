/*Write a program to find Sum of composite number in an array of different numbers entered by the user.*/

#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n,sum=0;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_composite_numbers(n,a);
    output(sum);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Please input array size: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        
    }
}


void output(int sum)
{
    printf("The sum of composite numbers in the given array is %d",sum);
}





