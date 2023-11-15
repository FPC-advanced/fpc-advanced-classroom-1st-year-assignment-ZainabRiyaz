/*3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)**/

#include <stdio.h>
#include <math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main()
{
    Camel c;
    c=input();
    find_weight(&c);
    output(c);
    return 0;
}
Camel input()
{
    Camel c;
    printf("Please input radius: ");
    scanf("%f",&c.radius);
    printf("Please input height: ");
    scanf("%f",&c.height);
    printf("Please input length: ");
    scanf("%f",&c.length);
    return c;
}

void find_weight(Camel *c)
{
    c->weight =3.141593*pow(c->radius,3)*sqrt(c->height*c->length);
}

void output(Camel c)
{
    printf("The weight is %f",c.weight);
}



