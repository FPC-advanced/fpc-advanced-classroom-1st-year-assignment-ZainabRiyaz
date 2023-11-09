/*3. Write a program to check if the given number is prime*/

#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
    int num,result;
    num=input_number();
    result=is_prime(num);
    output(num,result);
    return 0;
}

int input_number()
{
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    return n;
}

int is_prime(int n)
{
    int count=0,result=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if (count==2)
    {
        result=0;
    }
    else
    {
        result=1;
    }
    return result;
}

void output(int n, int result)
{
    if (result==0)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}

