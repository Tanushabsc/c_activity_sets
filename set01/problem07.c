//Write a C program to find sum of all natural numbers until n
#include <stdio.h>

int input_n()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n)
{
    int i,sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of 1st %d numbers is %d",n,sum);
}
int main()
{
    int a,s;
    a=input_n();
    s=sum_n_nos(a);
    output(a,s);
    return 0;
}
