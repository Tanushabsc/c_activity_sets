#include <stdio.h>
void input(int *a,int *b,int *c)
{
    printf("Enter 3 number: ");
    scanf("%d %d %d",a,b,c);
}
void compare(int a, int b, int c, int *largest)
{
    if(a>=b && a>=c)
    *largest=a;
    if(b>=a && b>=c)
    *largest=b;
    if(c>=a && c>=b)
    *largest=c;
}
void output(int a, int b, int c, int largest)
{
    printf("Largest number of %d, %d and %d is %d",a,b,c,largest);
}
int main ()
{
    int a,b,c,l;
    input(&a,&b,&c);
    compare(a,b,c,&l);
    output(a,b,c,l);
    return 0;
}