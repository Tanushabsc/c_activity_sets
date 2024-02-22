#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
    Triangle t;
    printf("Enter base of a triangle: ");
    scanf("%f",&t.base);
    printf("Enter altitude of a triangle: ");
    scanf("%f",&t.altitude);
    return t;

}
void find_area(Triangle *t)
{
    t->area= 0.5 * (t->base * t->altitude);
}
void output(Triangle t)
{
    printf("The area of triangle is %f",t.area);
}

int main()
{
    Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}