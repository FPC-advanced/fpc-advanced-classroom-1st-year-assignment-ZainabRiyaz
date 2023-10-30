/*Write a program to find Sum of composite number in an array of different numbers entered by the user.*/

#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

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
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=1;j<=a[j];j++)
        {
            if(a[i]%j==0)
            {
                count+=1;
            }
        }
        if (count>2)
        {
            sum+=a[i];
        }
    }
}





