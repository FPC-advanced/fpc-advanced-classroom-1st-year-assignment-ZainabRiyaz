/*Write a program to find the triangle with smallest area in n given triangles.*/

#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
void input_n_triangles(int n, Triangle t[n]);
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
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    return n;
}

void input_n_triangles(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the base: ");
        scanf("%d",&t[i].base);
        printf("Enter the altitude: ");
        scanf("%d",&t[i].altitude);
    }
}

void find_n_areas(int n, Triangle t[n])
{
    for(int i=0; i<n;i++)
    {
        t[i].area=0.5*t[i].altitude*t[i].base;
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle small;
    for(int i=0;i<n;i++)
    {
        if(t[i].area>t[i+1].area)
        {
            small.base=t[i+1].base;
            small.area=t[i+1].area;
            small.altitude=t[i+1].altitude;
        }
    }
    return small;
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest area is %f",smallest.area);
}















