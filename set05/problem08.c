/*8.  Write program to find the weight of a truck load of n camels.*/

#include <stdio.h>
#include <math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
    int n;
    Camel c[n];
    float tru_w,tot_w;
    input(n,c,&tru_w);
    find_camel_weight(n,c);
    tot_w=compute_total_weight(n,c,tru_w);
    output(tru_w);
    return 0;
}

void input(int n, Camel c[n], float *truck_weight)
{
    printf("Input total number of camels: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Input the radius of camel: ");
        scanf("%f",&c[i].radius);
        printf("Input the height of camel: ");
        scanf("%f",&c[i].height);
        printf("Input the length of camel: ");
        scanf("%f",&c[i].length);
    }
    printf("Enter the trucks weight: ");
    scanf("%f",truck_weight);
}

void find_camel_weight(int n, Camel c[n])
{
    for(int i=0;i<n;i++)
    {
        c[i].weight =3.141593*pow(c[i].radius,3)*sqrt(c[i].height*c[i].length);
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float camel_weight,total_truck;
    for(int i=0;i<n;i++)
    {
        camel_weight+=c[i].weight;
    }
    total_truck=camel_weight+truck_weight;
    return total_truck;
}

void output(float total_weight)
{
    printf("Total weight is %f",total_weight);
}
