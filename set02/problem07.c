/* Write a program to find the area of a triangle.*/

#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{

    return 0;
}

Triangle input_triangle()
{
    Triangle tri;
    printf("Please enter the base of the triangle: ");
    scanf("%f",&tri.base);
    printf("Please enter the altitude of the triangle: ");
    scanf("%f",&tri.altitude);
    return tri;
}

void find_area(Triangle *t)
{
    t.area =0.5*t.base*t.altitude;
}


