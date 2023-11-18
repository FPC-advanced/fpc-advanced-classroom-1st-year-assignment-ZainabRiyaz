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
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=1;j<=a[i];i++)
        {
            if(a[i]%j==0)
            {
                count+=1;
            }
        }
        if(count>2)
        {
            sum+=a[i];
        }
    }
    return sum;
}

void output(int sum)
{
    printf("The sum of composite numbers is %d ",sum);
}







