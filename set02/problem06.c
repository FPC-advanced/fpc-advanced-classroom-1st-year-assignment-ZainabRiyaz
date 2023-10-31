/*Write a program to reverse a string.*/

#include <stdio.h>

void input_string(char *a);
void str_reverse(char *a, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    input_string();
    return 0;
}

void input_string(char *a)
{
    printf("Please input the string: ");
    scanf("%d",a);
}

void str_reverse(char *a, char *rev_str)
{
    int i=0;
    int lent = len(a);
    for(lent;lent<i;lent--)
    {
        rev_str+=a[i];
    }
}

void output(char *a, char *reverse_a)
{
    printf("The string is %s and the reversed string is %s",&a,&reverse_a);
}



