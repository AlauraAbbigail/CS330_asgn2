#include <stdio.h>
#include "asgn2.h"

/*
*Helper Function: isPrime
*Usage: Determines if number is prime
*The function takes an integer input of n. It determines
*if the input value n is prime, then it should return in
*the "introToCS330" function as the string "Go Blazers". 
*/

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    cubeOfOdd(n);

    printf("Enter an integer: ");
    scanf("%d", &n);
    introToCS330(n);

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printHello(n);

    /*float length, width, height;
    printf("Enter room dimensions (length, width, height) in feet: ");
    scanf("%f %f %f", &length, &width, &height);
    printGallons(length, width, height);
    */

    return 0;
}