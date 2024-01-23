#include <stdio.h>
int input()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}
int compare(int a, int b, int c)
{
    if(a>=b && a>=c)
    return a;
    if(b>=a && b>=c)
    return b;
    
    return c;
}
void output(int a, int b, int c, int largest)
{
    printf("Largest number of %d, %d and %d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,l;
    a=input();
    b=input();
    c=input();
    l=compare(a,b,c);
    output(a,b,c,l);
    return 0;
}
