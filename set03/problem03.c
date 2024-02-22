//3. Write a program to check if the given number is prime
#include <stdio.h>
int input_number()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    return n;

}

int isprime(int n)
{
    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        result+=1;
    }
    return result;
}

void output(int n, int result)
{
    if(result<=2)
    printf("%d is a Prime number",n);
    else
    printf("%d is not a Prime number",n);
}
    


int main() {
    int n = input_number();
    int res= isprime(n);
    output(n,res);
    return 0;
}

