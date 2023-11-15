/*7.  Write a program to find out if the name of the camel is a nice name.*/

#include <stdio.h>
#include <string.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char name;
    int res;
    input(&name);
    res=has_nice_name(&name);
    output(res);
    return 0;
}

void input(char *name)
{
    printf("Enter the name of the camel: ");
    scanf("%s",name);
}

int has_nice_name(char *c)
{
    int vcount=0,ccount=0,res;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='I'||c[i]=='o'||c[i]=='O'||c[i]=='u'||c[i]=='U')
        {
            vcount+=1;
        }
        else
        {
            ccount+=1;
        }
    }
    if (vcount>=2 && ccount>=2)
    {
        res=0;
    }
    else{
        res=1;
    }
    return res;
}

void output(int res)
{
    if (res==0)
    {
        printf("It is a good camel name.");
    }
    else if (res==1)
    {
        printf("It is not a  good camel name.");
    }
}