/*Write a program to find the area of a triangle.*/

#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
    Triangle tri;
    tri=input_triangle();
    find_area(&tri);
    output(tri);
    return 0;
}

Triangle input_triangle()
{
    Triangle x;
    printf("Enter the base of the triangle: ");
    scanf("%f",&x.base);
    printf("Enter the height of the triangle: ");
    scanf("%f",&x.altitude);
    return x;
}

void find_area(Triangle *t)
{
    t.area = 0.5*t.base*t.altitude;
}

void output(Triangle t)
{
    printf("%f",t.area);
}



