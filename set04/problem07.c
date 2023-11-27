/*7. Write a program to add two fractions*/

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_lcm(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2,int lcm);
void output(Fraction f1, Fraction f2,Fraction sum);

int main()
{
    Fraction a,b,sum;
    int lcm;
    a=input_fraction();
    b=input_fraction();
    lcm=find_lcm(a.den,b.den);
    sum=add_fractions(a,b,lcm);
    return 0;
}

Fraction input_fraction()
{
    Fraction a;
    printf("Please input the numerator: ");
    scanf("%d",&a.num);
    printf("Please input the numerator: ");
    scanf("%d",&a.den);
    return a;
}

int find_lcm(int a, int b)
{
    int n1=a;
    int n2=b;
    int c,lcm;
    if(a>b)
    {
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    lcm=(n1*n2)/a;
    }
    else if (b>a)
    {
        while(a!=0)
        {
        c=b%a;
        b=a;
        a=c;
        }
        lcm=(n1*n2)/b;
    }
    else 
    {
        return lcm;
    }
    return lcm;
}

Fraction add_fractions(Fraction f1, Fraction f2,int lcm)
{
    Fraction sum;
    int m1,m2;
    m1=lcm/f1.den;
    m2=lcm/f2.den;
    f1.num=f1.num*m1;
    f2.num=f2.num*m2;
    sum.num=f1.num+f2.num;
    sum.den=lcm;
    return sum;
}

void output(Fraction f1, Fraction f2,Fraction sum)
{
    printf("The lcm is  %d/%d",sum.num,sum.den);
}