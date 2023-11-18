/*5. Write a program to find the index of the largest number in an array*/

#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
    int n,ilarge;
    n=input_size();
    int a[n];
    input_array(n,a);
    ilarge=find_largest_index(n,a);
    output(ilarge);
    return 0;
}

int input_size()
{
    int n;
    printf("Please input the size of the array: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Input element: ");
        scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
    int largest,ilarge;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            largest=a[i];
            ilarge=i;
        }
        else
        {
            largest=a[i+1];
            ilarge=i+1;
        }
    }
    return ilarge;
}

void output(int index)
{
    printf("The index is %d",index);
}