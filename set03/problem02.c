/*2. Write a program to find whether the given 3 points form a triangle*/

#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1,y1,x2,y2,x3,y3;
    int result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the first x coordinate: ");
    scanf("%f",x1);
    printf("Enter the first y coordinate: ");
    scanf("%f",y1);
    printf("Enter the second x coordinate: ");
    scanf("%f",x2);
    printf("Enter the second y coordinate: ");
    scanf("%f",y2);
    printf("Enter the third x coordinate: ");
    scanf("%f",x3);
    printf("Enter the third y coordinate: ");
    scanf("%f",y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float area;
    int result=0;
    area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if (area==0)
    {
        result=0;
    }
    else
    {
        result=1;
    }
    return result;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result==0)
    {
        printf("The given 3 points (%f,%f),(%f,%f),(%f,%f) do not make a triangle.",x1,y1,x2,y2,x3,y3,result);
    }
    else 
    {
        printf("The given 3 points (%f,%f),(%f,%f),(%f,%f) make a triangle.",x1,y1,x2,y2,x3,y3,result);
    }
}

