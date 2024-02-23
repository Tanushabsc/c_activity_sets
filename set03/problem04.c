//4. Write a program to find nth number in fibonacci sequence.
#include <stdio.h>
int input()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    return n;

}
int find_fibo(int n)
{
    int x=0;
    int y=1;
    int t=x+y;
    for(int i=2;i<n;i++)
    {
        x=y;
        y=t;
        t=x+y;
    }
    return t;
}
void output(int n, int fibo)
{
    printf("fibo(%d) = %d",n,fibo);
}

int main()
{
    int n= input();
    int fib= find_fibo(n);
    output(n,fib);
    return 0;
}