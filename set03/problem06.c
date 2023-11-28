/*6. Write a program to find the index of a substring of a string*/

#include <stdio.h>

void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main()
{
    char str[100],substr[100];
    int i=0;
    input_string(str,substr);
    i=sub_str_index(str,substr);
    output(str,substr,i);
    return 0;
}

void input_string(char *a,char *b)
{
    printf("Enter string: ");
    scanf("%s",a);
    printf("Enter substring: ");
    scanf("%s",b);
}

int sub_str_index(char *string, char *substring)
{
    int lenstr=0,lensub=0;
    for(lenstr=0;string[lenstr]!='\0';lenstr++);
    for(lensub=0;substring[lensub]!='\0';lensub++);
    for(int i=0;i<lenstr;i++)
    {
        if(string[i]==substring[0])
        {
            for(int j=0;j<lensub;j++)
        {
            if(substring[j]!=string[i])
            {
                break;
            }
            else
            {
                return i;
            }
        }
        }
    }
}

void output(char *string,char *substring,int index)
{
    printf("The index pf %s in %s is %d\n",substring,string,index);
}
