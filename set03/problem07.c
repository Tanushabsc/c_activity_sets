//7. Write a program to find the length of a line.
#include <stdio.h>
#include <math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point()
{
    Point p;
    printf("Enter x: ");
    scanf("%f",&p.x);
    printf("Enter y: ");
    scanf("%f",&p.y);
    return p;

}
Line input_line(Point p1, Point p2)
{
    Line l;
    l.p1=p1;
    l.p2=p2;
    return l;

}
void find_length(Line *l)
{
    Point p1,p2;
    l->distance= sqrt(pow(((l->p2.x) - (l->p1.x)),2)+ pow(((l->p2.y) - (l->p1.y)),2));
}
//d=√((x2 – x1)² + (y2 – y1)²)
void output(Line l)
{
    printf("The distance is %f",l.distance);
}

int main()
{
    Point p1,p2;
    p1=input_point();
    p2=input_point();
    Line l=input_line(p1,p2);
    find_length(&l);
    output(l);
    return 0;
}