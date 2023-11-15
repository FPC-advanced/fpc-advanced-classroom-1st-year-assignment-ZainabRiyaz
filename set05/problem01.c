/*1.  Write a program to find the distance between two points.*/

#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point a,b;
    a=input();
    b=input();
    float res;
    dist(a,b,&res);
    output(a,b,res);
    return 0;
}

Point input()
{
    Point a;
    printf("ENTER THE X COORDINATE: ");
    scanf("%f",&a.x);
    printf("ENTER THE Y COORDINATE: ");
    scanf("%f",&a.y);
    return a;
}

void dist(Point a, Point b, float *res)
{
    *res=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}

void output(Point a, Point b, float res)
{
    printf("The distance between points (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,res);
}
