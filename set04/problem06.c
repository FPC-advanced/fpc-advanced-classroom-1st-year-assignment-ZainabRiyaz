/*6. Write a program to count the number of words in a string using strtok (_string.h_)*/

#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int  main()
{

    return 0;
}

void input_string(char *a)
{
    printf("Enter the string: ");
    scanf("%99[^\n]",a);
}

int count_words(char *string)
{
    int c=0;
    char tok=strtok(string," ");
    while(tok!=NULL)
    {
        c++;
        tok=strtok(NULL," ");
    }
    return c;
}

void output(char *string,int no_words)
{
    printf("The total number of words are %d",no_words);
}
