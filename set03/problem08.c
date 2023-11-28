/*8. Write a program to find the permeter of a polygon*/

#include <stdio.h>
#include <math.h>

typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point();
void input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main()
{
    int n;
    Polygon p;
    n=input_n();
    input_polygon(&p);
    find_perimeter(&p);
    output(p);
    return 0;
}
int input_n()
{
    int n;
    printf("Enter the number of sides: ");
    scanf("%d",&n);
    return n;
}

Point input_point()
{
    Point a;
    printf("Enter x and y coordinate (x,y): ",a.x,a.y);
    scanf("%f %f");
    return a;
}

void input_polygon(Polygon *p)
{
    printf("Enter number of sides: ");
    scanf("%d",p->sides);
    for(int i=0;i<p->sides;i++)
    {
        p->p[0]=input_point();
    }
}

float find_distance(Point a, Point b)
{
    float distance=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
    return distance;
}

void find_perimeter(Polygon *p)
{
    for(int i=0;i<p->sides;i++)
    {
        p->perimeter+=find_distance(p->p[i],p->p[i+1]);
    }
}

void output(Polygon p)
{
    printf("The perimeter is %f",p.perimeter);
}