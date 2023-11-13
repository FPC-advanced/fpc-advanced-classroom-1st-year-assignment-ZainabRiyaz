/*6. Write a program to find the index of a substring of a string*/

/*strstr(string,substring) is used for finding a string in another string where as strchr(string,char) is used for finding a char in a string.*/
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
    index=sub_str_index(&string,&sub);
    output(&string,&sub,index);
    return 0;
}

void input_string(char *a, char *b)
{
    printf("Please input the main string: ");
    scanf("%s",a);
    printf("Please input the substring to find string: ");
    scanf("%s",b);
}

int sub_str_index(char *string, char *substring)
{
    int index=0;
    char *ptr=strstr(string,substring);
    for(int i=0;i<strlen(string);i++)
    {
        if (&string[i]==ptr)
        {
            index=i;
        }
    }
    return index;
}

void output(char *string, char *substring, int index)
{
    if (index!=0)
    {
        printf("The substring %s in string %s is at index %d",substring,string,index);
}
else 
{
    printf("Substring %s not found in string %s",substring,string);
}
}
