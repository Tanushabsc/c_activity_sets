//Write a program find whether a number is a composite number
#include <stdio.h>
int input_number()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        result+=1;
    }
}
void output(int n, int result)
{
    if(result>2)
    printf("%d is a composite number",n);
    else
    printf("%d is not a composite number",n);
}

int main()
{
    int a;
    a=input_number();
    int res=is_composite(a);
    output(a,res);
    return 0;
}