//5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include <stdio.h>

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i < n; i++) {
        if (a[i] != 0) {
            for (int j = i * 2; j < n; j += i) {
                a[j] = 0;
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i < n; i++) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int n = input_array_size();
    int a[n];
    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n,a);
    return 0;
}
