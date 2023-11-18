/*2. Write a program to find the smallest of three fractions*/

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input();
void find_small(Fraction a, Fraction b, Fraction c,Fraction *small);
void output(Fraction a, Fraction b, Fraction c,Fraction small);

int main()
{
    Fraction a,b,c,small;
    a=input();
    b=input();
    c=input();
    find_small(a,b,c,&small);
    output(a,b,c,small);
    return 0;
}

Fraction input()
{
    Fraction x;
    printf("Please enter numerator: ");
    scanf("%d",&x.num);
    printf("Please enter denominator: ");
    scanf("%d",&x.den);
    return x;
}

void find_small(Fraction a, Fraction b, Fraction c,Fraction *small)
{
    int max,m1,m2,m3;
    if((a.den>b.den) && (a.den>c.den))
    {
        max=a.den;
    }
    else if ((b.den>a.den) && (b.den>c.den))
    {
        max=b.den;
    }
    else
    {
        max=c.den;
    }
    while(1)
    {
        if(max%a.den==0 && max%b.den==0 && max%c.den==0)
        {
            small->den=max;
            break;
        }
        else
        {
            max++;
        }
    }
    m1=max/a.num;
    m2=max/b.num;
    m3=max/c.num;
    a.num=a.num*m1;
    b.num=b.num*m2;
    c.num=c.num*m3;
    if (a.num<b.num && a.num<c.num)
    {
        small->num=a.num;
    }
    else if (b.num<a.num && b.num<c.num)
    {
        small->num=b.num;
    }
    else
    {
        small->num=c.num;
    }
}

void output(Fraction a, Fraction b, Fraction c,Fraction small)
{
    printf("The smallest is: %d/%d",small.num,small.den);
}


