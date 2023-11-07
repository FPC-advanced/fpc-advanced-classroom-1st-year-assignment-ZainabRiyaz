/*Write a program to find the area of a triangle.*/

#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();

int main()
{
    Triangle tri;
    tri=input_triangle();
    return 0;
}

Triangle input_triangle()
{
    Triangle x;
    printf("Enter the base of the triangle: ");
    scanf("%f",&x.base);
    printf("Enter the height of the triangle: ");
    scanf("%f",&x.altitude);

}


