/*3. Write a program to find the `nCr` of given n and r*/

#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int r,n,res;
    input_n_and_r(&n,&r);
    res=nCr(n,r);
    output(n,r,res);
    return 0;
}

void input_n_and_r(int *n, int *r)
{
    printf("Please input the n: ");
    scanf("%d",n);
    printf("Please input the r: ");
    scanf("%d",r);
}

int nCr(int n, int r)
{
    int factn=1,factr=1,factrn=1,nCr;
    int l=n-r;
    for(int i=1;i<=n;i++)
    {
        factn=factn*i;
    }
    for(int j=1;j<=r;j++)
    {
        factr=factr*j;
    }
    for(int k=1;k<=l;k++)
    {
        factrn=factrn*k;
    }
    if(r>n)
    {
        nCr=0;
    }
    else if(n>r)
    {
        nCr=factn/(factr*factrn);
    }
    return nCr;
}

void output(int n, int r, int result)
{
    printf("The nCr is %d",result);
}
