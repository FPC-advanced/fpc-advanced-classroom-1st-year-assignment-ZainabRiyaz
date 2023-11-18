/*6. Write a program to count the number of words in a string using strtok (_string.h_)*/

#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
    char str;
    int nword;
    input_string(&str);
    nword=count_words(&str);
    output(&str,nword);
    return 0;
}

void input_string(char *a)
{
    printf("Please enter the string: ");
    scanf("%s",a);
}

int count_words(char *string)
{
    char *tok;
    int count=0;
    while(tok=strtok(string," ")!=NULL)
    {
        string=NULL;
        count++;
    }
    return count;
}

void output(char *string, int no_words)
{
    printf("The total number of words is %d",no_words);
}