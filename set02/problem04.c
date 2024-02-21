//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>
int input_array_size()
{
    int n;
    printf("Enter Size of array: ");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
}
int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int result=0;
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0){
            result+=1;
            }
        }
    
        if(result>2){
        sum+=a[i];
        }
    }
    return sum;
    
}
void output(int sum)
{
    printf("The sum is %d", sum);
}

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    int s = sum_composite_numbers(n,a);
    output(s);
    return 0;

}

