//Write a program to find if a triangle is scalene.
#include <stdio.h>
int input_side()
{
    int n;
    printf("Enter the side of triangle: ");
    scanf("%d",&n);
    return n;
}

int check_scalene(int a, int b, int c)
{
    int scalene;
    if(a!=b && b!=c && c!=a)
    return scalene=1;
}
void output(int scalene)
{
    if(scalene==1)
    printf("It is a scalene triangle");
    else
    printf("It is not a scalene triangle");
}

int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int scal=check_scalene(a,b,c);
    output(scal);
    return 0;
}