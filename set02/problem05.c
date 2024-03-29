//Write a program to find GCD (HCF) of two numbers.
#include <stdio.h>
int input()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
    int gcd;
    for(int i=1;i<=a && i<=b ;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
void output(int a, int b, int gcd)
{
    printf("GCD of %d and %d is %d",a,b,gcd);
}

int main()
{
    int a=input();
    int b=input();
    int gcd = find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}