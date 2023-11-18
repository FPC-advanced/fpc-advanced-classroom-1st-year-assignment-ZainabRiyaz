/*Write a program to find the area of a triangle.*/

#include <stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    float b,h,area;
    input(&b,&h);
    find_area(b,h,&area);
    output(b,h,area);
    return 0;
}

void input(float *base,float *height)
{
    printf("Enter the base of the triangle: ");
    scanf("%f",base);
    printf("Enter the height of the triangle: ");
    scanf("%f",height);
}

void find_area(float base , float height,float *area)
{
    *area = 0.5*base*height;
}

void output(float base, float height, float area)
{
    printf("The triangle having %.2f base and %.2f height has an area of %.2f sq mtrs.",base,height,area);
}

