//1. Write a program to find the distance between 2 points
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter x1 and y1: ");
    scanf("%f %f",x1,y1);
    printf("Enter x2 and y2: ");
    scanf("%f %f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2){
    double distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}
void output(float x1, float y1, float x2, float y2, double distance){
    printf("The distance between point (%f,%f) and (%f,%f) is %f",x1,x2,y1,y2,distance);
}
int main(){
    float x1,y1,x2,y2;
    input(&x1,&y1,&x2,&y2);
    double distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
}