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
    Polygon pl;
    input_polygon(&pl);
    find_perimeter(&pl);
    output(pl);
    return 0;
}

int input_n()
{
    int n;
    printf("Please input the number of sides of the polygon: ");
    scanf("%d",&n);
    return n;
}

Point input_point()
{
    Point p;
    printf("Please enter the x and y coordinte (x,y) : ");
    scanf("%f %f",&p.x,&p.y);
    return p;
}

void input_polygon(Polygon *p)
{
    int n=input_n();
    for(int i=0;i<n;i++)
    {
        p->p[i]=input_point();
    }
}

float find_distance(Point a, Point b)
{
    float distance;
    distance=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
    return distance;
}

void find_perimeter(Polygon *p)
{
    float distance;
    for(int i=0;i<p->sides;i++)
    {
        if(i!=p->sides-1)
        {
        distance+=find_distance(p->p[i],p->p[i+1]);
        }
        else if(i==p->sides-1)
        {
            distance+=find_distance(p->p[i],p->p[0]);
        }
    }
    p->perimeter=distance;
}

void output(Polygon p)
{
    printf("The perimeter is %f",p.perimeter);
}
