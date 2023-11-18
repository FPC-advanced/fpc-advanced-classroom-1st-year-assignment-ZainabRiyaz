/*2. Write a program to find the smallest of three fractions*/

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

void input(Fraction *a, Fraction *b, Fraction *c);
void find_small(Fraction a, Fraction b, Fraction c,Fraction *small);
void output(Fraction a, Fraction b, Fraction c,Fraction small);

int main()
{
    Fraction a,b,c,small;
    input(&a,&b,&c);
    find_small(a,b,c,&small);
    output(a,b,c,small);
    return 0;
}

void input(Fraction *a, Fraction *b, Fraction *c)
{
    printf("Please input the numerator: ");
    scanf("%d",a->num);
    printf("Please input the denominator: ");
    scanf("%d",a->den);
    printf("Please input the numerator: ");
    scanf("%d",b->num);
    printf("Please input the denominator: ");
    scanf("%d",b->den);
    printf("Please input the numerator: ");
    scanf("%d",c->num);
    printf("Please input the denominator: ");
    scanf("%d",c->den);
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
    a.num=max/m1;
    b.num=max/m2;
    c.num=max/m3;
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


