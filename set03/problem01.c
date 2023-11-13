/*1. Write a program to find the distance between 2 points*/

#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    float x1,x2,y1,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Input the first x coordinate: ");
    scanf("%f",x1);
    printf("Input the first y coordinate: ");
    scanf("%f",y1);
    printf("Input the second x coordinate: ");
    scanf("%f",x2);
    printf("Input the second y coordinate: ");
    scanf("%f",y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between coordinates (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}

