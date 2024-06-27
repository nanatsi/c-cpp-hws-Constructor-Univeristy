//CH - 230 - A
//a5.p11.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>

int find_prime(int n, int divisor) {
    //0, 1 aren't prime numbers
    if (n <= 1) {
        return 0;
    }
    //since div=n-1 if div<=1 than 2 is prime
    else if (divisor <= 1) {
        return 1;
    }
    //divides and checks each time 
    else if (n % divisor == 0) {
        return 0;
    }
    //recursively uses function
    return find_prime(n, divisor - 1);
}

int main() {
    int n;
    //reads an integer
    scanf("%d", &n);
    int divisor = n - 1;
    //making sure it's positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        scanf("%d", &n);
        return 1;  // Exit with an error code
    }
    //if 0 is returned than it's not prime
    if (find_prime(n, divisor) == 0) {
        printf("%d is not prime\n", n);
    }
    //else it is prime
    else {
        printf("%d is prime\n", n);
    }

    return 0;
}