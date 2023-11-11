/*6. Write a program to find the index of a substring of a string*/

#include <stdio.h>
#include <string.h>

void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main()
{
    char sub,string;
    int index=0;
    input_string(&string,&sub);
    sub_str_index(&string,&sub);
    output(&string,&sub,index);
    return 0;
}

void input_string(char* a, char* b)
{
    printf("Please input the main string: ");
    scanf("%s",a);
    printf("Please input the substring to find string: ");
    scanf("%s",b);
}

int sub_str_index(char *string, char *substring)
{
    int len,index=0;
    len=strlen(string);
    int count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<strlen(substring);j++)
        {
        if (string[i]==substring[i])
        {
            index=i;
            count+=1;
        }
        }
    }
    if (count==strlen(substring))
    {
        return index;
    }
    else
    {
        printf("The substring is not present.");
    }
}

void output(char *string, char *substring, int index)
{
    if (index!=0)
    {
        printf("The substring is at %d",index);
}
}
