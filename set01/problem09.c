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
    float accy=0.0001;
    float in_guess=1.0;
    while(in_guess*in_guess-n>accy)
    {
        in_guess=(in_guess+ (n/in_guess))/2;
    }
    return in_guess;
}

void output(float n, float sqroot)
{
    printf("The square root of %.2f is %.2f\n",n,sqroot);   
}



