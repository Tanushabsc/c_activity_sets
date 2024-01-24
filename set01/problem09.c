//Write a C program to find the square root of a number.
#include <stdio.h>
#include <math.h>

float input()
{
    float inp;
    printf("enter the number\n");
    scanf("%f", &inp);
    return inp;
}

float half_square_root(float n) 
{
  int x_old=1,x_new=n/2;
  while(fabs(x_new-x_old)>0.000001)
    {
      x_old=x_new;
      x_new=(x_old+n/x_old)/2;
      x_new=(x_new)/2;
    }
  return x_new;
}

void output(float n, float half_sqrroot)
{
   printf("the half of squareroot of %f is  %f", n,half_sqrroot);
 
}
int main()
{
    float inp, sqrrt;
    inp=input();
    sqrrt=half_square_root(inp);
    output(inp,sqrrt);
    
}