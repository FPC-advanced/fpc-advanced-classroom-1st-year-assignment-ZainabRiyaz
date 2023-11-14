/*6. Write a program to find the index of a substring of a string*/

#include <stdio.h>
#include <string.h>

void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main()
{
    char string,substring;
    input_string(&string,&substring);
    int index;
    index=sub_str_index(&string,&substring);
    output(&string,&substring,index);
    return 0;
}

void input_string(char* a, char* b)
{
    printf("Input the string: ");
    scanf("%s",a);
    printf("Input the substring: ");
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
    int index=0;
    for(int i=0;i<strlen(string);i++)
    {
        index=-1;
        for(int j=0;j<strlen(substring);j++)
        {
            if (string[i+j]==substring[j])
            {
                index=i;
            }
            else
            {
                index=-1;
                break;
            }
        }
        if (index!=-1)
        {
            break;
        }
    }
    return index;
}

void output(char *string, char *substring, int index)
{
    printf("%d",index);
    if (index!=-1){
    printf("The index of '%s' in '%s' is %d",substring,string,index);
    }
    else
    {
        printf("Strings unmatched");
    }
}