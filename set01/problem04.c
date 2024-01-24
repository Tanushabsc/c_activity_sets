//Write a C program to add two numbers using pass by reference
#include <stdio.h>
int input()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a,b,s;
    a=input();
    b=input();
    add(a,b,&s);
    output(a,b,s);
    return 0;
}