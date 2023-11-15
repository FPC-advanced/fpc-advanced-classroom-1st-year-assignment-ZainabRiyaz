/*6.  Write a program to find the average of all the odd elements in an array*/

#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
    int n,avg;
    n=input_n();
    int a[n];
    input(n,a);
    avg=odd_average(n,a);
    output(avg);
    return 0;
}

int input_n()
{
    int n;
    printf("Input size of the array: ");
    scanf("%d",&n);
    return n;
}

void input(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum+=a[i];
            count+=1;
        }
    }
    float avg;
    avg=sum/count;
    return avg;
}

void output(float avg)
{
    printf("The avg is %f",avg);
}




