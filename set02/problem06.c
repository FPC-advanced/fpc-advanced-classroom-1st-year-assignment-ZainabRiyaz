/*Write a program to reverse a string.*/

#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *a, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char str,rev_str;
    input_string(&str);
    str_reverse(&str,&rev_str);
    output(&str,&rev_str);
    return 0;
}

void input_string(char *a)
{
    printf("Please input the string: ");
    scanf("%s",a);
}

//strrev(str)- reverses string using library function.
void str_reverse(char *a, char *rev_str)
{
    int lent = strlen(a);
    int len=lent;
    char change;
    char s=a;
    for(int i=0;i<lent;i++)
    {
        change=a[i];
        rev_str[len-1]=change;
        len--;
    }
}

void output(char *a, char *reverse_a)
{
    printf("The string is %s and the reversed string is %s",a,reverse_a);
}




