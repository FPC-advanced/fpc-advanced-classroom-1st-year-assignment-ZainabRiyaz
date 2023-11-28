/*5.  Write a program to find borga(x) given */

#include <stdio.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main()
{
    int x;
    x=input(x);
    float res=borga_X(x);
    output(x,res);
    return 0;
}
int input(int x)
{
    printf("Enter the value of x: ");
    scanf("%d",&x);
    return x;
}

float borga_X(int x)
{
    float borga_x,sum,k=1,fact=1;
    for(int i=0;i<x;i++)
    {
        while(borga_x!=0.000001)
        {
            sum+=pow(x,i)/k;
        }
    }
    return sum;
}

void output(int x, float result)
{
    printf("borga(%d)=%d",x,result);
}