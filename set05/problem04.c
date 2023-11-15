/*4.  Write a program to find out the mood of a Camel.*/

#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
    float radius,height,length,mood;
    input_camel_details(&radius,&height,&length);
    mood=find_mood(radius,height,length);
    output(radius,height,length,mood);
}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Input the radius: ");
    scanf("%f",radius);
    printf("Input the height: ");
    scanf("%f",height);
    printf("Input the length: ");
    scanf("%f",length);
}

int find_mood(float radius, float height, float length)
{
    int mood;
    if (radius<height && radius<length)
    {
        mood=0;   /*sick: mood=0*/
    }
    else if(height<length && height<radius)
    {
        mood=1;  /*happy mood=1*/
    }
    else if(length<height && length<radius)
    {
        mood=2; /*tense mood=2*/
    }
    return mood;
}

void output(float radius, float height, float length, int mood)
{
    if (mood==0)
    {
        printf("The Camel is sick.");
    }
    else if (mood==1)
    {
        printf("The Camel is happy");
    }
    else if (mood==1)
    {
        printf("The Camel is tense");
    }
}




