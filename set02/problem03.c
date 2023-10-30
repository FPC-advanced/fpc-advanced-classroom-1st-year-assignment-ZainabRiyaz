/*Write a program find whether a number is a composite number*/

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int num,result=0;
    num=input_number();
    result=is_composite(num);
    output(num,result);
    return 0;
}

int input_number()
{
    int num;
    printf("Please enter the number: ");
    scanf("%d",&num);
    return num;
}

int is_composite(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            count+=1;
        }
    }
    return count;
}

void output(int n, int result)
{
    if(result>2)
    {
        printf("%d is a composite number.",n);
    }
    else
    {
        printf("%d is not a composite number.",n);
    }
}



