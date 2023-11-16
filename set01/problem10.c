//10. Write a C program to compare two strings, character by character.//

#include <stdio.h>
#include <string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    char str1[100],str2[100];
    input_two_strings(&str1,&str2);
    int result;
    result=stringcompare(&str1,&str2);
    output(&str1,&str2,result);
    return 0;
}

void input_two_strings(char *string1, char *string2)
{
    printf("Please enter the first string: ");
    scanf("%s",string1);
    printf("Please enter the second string: ");
    scanf("%s",string2);
}

int stringcompare(char *string1, char *string2)
{
    int flag=0;
    for(int i=0,j=0;i<strlen(string1),j<strlen(string2);i++,j++)
    {
        if (string1[i]>string2[j])
        {
            flag=1;
        }
        else if (string1[i]<string2[j])
        {
            flag=2;   
        }
        else if (string1[i]==string2[j])
        {
            flag=0;
        }
    }
    return flag;
}

void output(char *string1, char *string2, int result)
{
    if (result==1)
    {
        printf("%s is greater than %s",string1,string2);
    }
    else if (result==2)
    {
        printf("%s is greater than %s",string2,string1);
    }
    else
    {
        printf("The strings are equal");
    }
    
}