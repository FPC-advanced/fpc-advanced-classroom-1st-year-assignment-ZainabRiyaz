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
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{
    Polygon pl;
    input_polygon(&pl);
    float distance;
    distance=find_distance(pl.p[0],pl.p[1]);
    find_perimeter(&pl);
    output(pl);
}

int input_n()
{
    int sides;
    printf("Please input the number of sides of the polygon: ");
    scanf("%d",&sides);
    return sides;
}

Point input_point()
{
    Point p;
    printf("Please input the x coordinate : ");
    scanf("%f",&p.x);
    printf("Please input the y coordinate : ");
    scanf("%f",&p.y);
    return p;   
}

void input_polygon(Polygon *p)
{
    p->sides=input_n();
    p->p[0]=input_point();
    p->p[1]=input_point();
}

float find_distance(Point a, Point b)
{
    float distance;
    distance = sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
    return distance;
}

void find_perimeter(Polygon *p)
{
    float distance;
    distance=find_distance(p->p[0],p->p[1]);
    p->perimeter=p->sides*distance;
}

void output(Polygon p)
{
    printf("The perimeter of the polygon is: %d ",p.perimeter);
}