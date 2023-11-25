/*08. Write a program to find the triangle with smallest area in n given triangles.*/

#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
float find_area(Triangle t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int n;
    n=input_n();
    Triangle t[n],small;
    input_n_triangles(n,t);
    find_n_areas(n,t);
    small=find_smallest_triangle(n,t);
    output(n,t,small);
    return 0;
}

int input_n()
{
    int n;
    printf("Please enter the total size of the array: ");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle()
{
    Triangle tri;
    printf("Enter the base of the triangle: ");
    scanf("%f",&tri.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f",&tri.altitude);
    return tri;
}

void input_n_triangles(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        t[i]=input_triangle();
    }
}

float find_area(Triangle t)
{
    t.area=0.5*t.altitude*t.base;
    return t.area;
}

void find_n_areas(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        t[i].area=find_area(t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    float large;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if (t[i].area>large)
        {
            large=t[i].area;
            count=i;
        }
        else
        {
            continue;
        }
    }
    return t[count];
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest area is (%f,%f) having area %f",smallest.base,smallest.altitude,smallest.area);
}

