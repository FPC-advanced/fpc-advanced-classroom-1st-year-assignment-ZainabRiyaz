//Write a C program to find the [square root] of a number.//

#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqroot);

int main()
{
    float num,sqroot;
    num=input();
    sqroot=square_root(num);
    output(num,sqroot);
    return 0;
}

float input()
{
    int x;
    printf("Please enter the number: ");
    scanf("%d",&x);
    return x;
}

float square_root(float n)
{
    float error = 0.00001;
    float s= n;
    while ((s-n/s>error))
    {
        s= (s+n/s)/2;
    }
    return s;
}

void output(float n, float sqroot)
{
    printf("The square root of %.2f is %.2f\n",n,sqroot);   
}



