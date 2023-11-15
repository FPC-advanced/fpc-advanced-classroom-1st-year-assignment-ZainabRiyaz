/*2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.*/

#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Please input radius: ");
    scanf("%f",radius);
    printf("Please input height: ");
    scanf("%f",height);
    printf("Please input length: ");
    scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
    float weight =3.141593*pow(radius,3)*sqrt(height*length);
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight is %f",weight);
}



