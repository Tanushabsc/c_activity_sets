//Write a C program to find the sum of n complex numbers

#include <stdio.h>
struct complex_number
{
    float real, img;
};
typedef struct complex_number Complex;
int get_n()
{
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}   
Complex input_complex()
{
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.img);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex result = {0, 0};
    for (int i = 0; i < n; i++)
    {
        result = add(result, c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result)
{
    printf("Complex numbers entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f + %fi\n", c[i].real, c[i].img);
    }
    printf("Sum of complex numbers: %f + %fi\n", result.real, result.img);
}
int main()
{
    int n = get_n();
    Complex complex_numbers[n];
    input_n_complex(n, complex_numbers);
    Complex sum = add_n_complex(n, complex_numbers);
    output(n, complex_numbers, sum);
    return 0;
}