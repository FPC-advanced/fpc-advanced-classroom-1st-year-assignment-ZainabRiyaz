/*Write a program to find if a triangle is scalene.*/

#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a,b,c,result=0;
    a=input_side();
    b=input_side();
    c=input_side();
    result = check_scalene(a,b,c);
    output(a,b,c,result);
    return 0;
}

int input_side()
{
    int s;
    printf("Please input the side: ");
    scanf("%d",&s);
    return s;
}

int check_scalene(int a,int b,int c)
{
    int result=0;
    if (a==b)
    {
        result=1;
    }
    else if (b==c)
    {
        result=1;
    }
    else if (a==c)
    {
        result =1;
    }
    else
    {
        result = 0;
    }
    return result;
}

void output(int a, int b, int c, int isscalene)
{
    if (isscalene==0)
    {
        printf("The triangle with sides %d,%d,%d is scalene",a,b,c);
    }
    else 
    {
        printf("The triangle with sides %d,%d,%d is not scalene",a,b,c);
    }
}




