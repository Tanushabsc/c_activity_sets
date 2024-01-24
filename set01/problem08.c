//Write a C program to find sum of n different numbers entered by the user.
#include <stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    
    for(int i=0; i<n; i++)
    {
       printf("Enter the elements: ");
       scanf("%d",&a[i]);
    }
}
 int sum_n_array(int n, int a[n])
 {
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
        
    }
    return sum;


 }
void output(int sum)
{
    printf("The sum is %d",sum);
}
int main()
{
    int n;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    int s=sum_n_array(n,a);
    output(s);
    return 0;

}
