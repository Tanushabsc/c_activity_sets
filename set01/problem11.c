//Write a C program to find the sum of 2 complex numbers

#include <stdio.h>
struct complex_numbers
{
    float real;
    float img;
};
typedef struct complex_numbers Complex;
Complex input(Complex c)
{
    printf("Enter real nummber: ");
    scanf("%f",&c.real);
    printf("Enter imaginary number: ");
    scanf("%f",&c.img);
    return c;
}


Complex find_sum(Complex c1, Complex c2)
{
    Complex sum;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    return sum;
}


void output(Complex c1, Complex c2, Complex sum)
{
    printf("%f + %fi + %f + %fi = %f + %fi",c1.real,c1.img,c2.real,c2.img,sum.real,sum.img);
}
int main()
{
    Complex c1,c2;
    c1=input(c1);
    c2=input(c2);
    Complex sum=find_sum(c1,c2);
    output(c1,c2,sum);
    return 0;
}

