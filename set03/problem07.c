/*7. Write a program to find the length of a line*/

#include <stdio.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();


int main()
{
    Line l;
    l=input_line();
    printf("%f and %f",l.p1,l.p2);
    return 0;
}


Point input_point()
{
    Point p;
    printf("Please enter the x coordinate of the point: ");
    scanf("%f",&p.x);
    printf("Please enter the y coordinate of the point: ");
    scanf("%f",&p.y);
    return p;
}

Line input_line()
{
    Point p1,p2;
    p1=input_point();
    p2=input_point();
    Line l;
    l.p1=p1;
    l.p2=p2;
    return l;
}

