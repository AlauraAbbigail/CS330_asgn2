#ifndef __asgn2__
#define __asgn2__

/* the two lines above check to ensure
we haven't already included this header*/


/* your functions go here */
// Note: main() goes in the asgn2.c file

/*
*Function: cubeOfOdd
*Usage: prints the cube of all odd integers less than input, n.
*This function takes an integer input of n. If n is non-negative, it will
*take all the odd integer values that are less than n, starting at one, and
*print the cube of each value. If the input is negative, then it will ask
*for another input that is positive / non-negative. 
*/

int cubeOfOdd (int n) {
    if (n <= 0) {
        printf("Please provide a non-negative integer: \n");
    }

    for (int i = 1; i <= n; i += 2) {
        int cube = i * i * i;
        printf("%d\n", cube);
    }
    return 0;
}

/*
*Function: introToCS330
*Usage: prints a string based on specific conditions of an integer n.
*This function takes an integer input of n. If n is divisible by seven,
*it prints the string "UAB". If n is divisible by three, it prints the
*string "CS". If n is divisible by both seven and three, then it prints
*the string "UAB CS 330". If n is a prime number other than three or seven
*then it prints the string "Go Blazers". Other than the above, it should 
*print the cube of n.
*/

int introToCS330(int n) {
    if(n % 3 == 0 && n % 7 == 0) {
        printf("UAB CS 330\n");
    } else if (n % 7 == 0) {
        printf("UAB\n");
    } else if (n % 3 == 0) {
        printf("CS\n");
    } else if (isPrime(n) == true && n != 3 && n != 7) {
        printf("Go Blazers\n");
    } else {
        int cube = n * n * n;
        printf(%d\n, cube);
    }
    return 0;
}

/*
*Function: printHello
*Usage: prints a string with the integers zero through n, inclusivly, 
*except every power of two is replaced by "HELLO".
*This function accepts an integer input of n, where n is equal to or
*greater than zero. It will print the string of integers from zero to
*the input n, except every integer that is a power of 2 is replaced by
*"HELLO". 
*/

int printHello(int n) {
    if (n < 0) {
        printf("Please input a non-negative integer: \n");
    }
    for (int i = 0; i <= n; i++) {
        if (n % 2 == 0) {
            printf("HELLO");
        } else {
            printf("%d", i);
        }
    }
    printf("\n");
}

/*
*Function: printGallons
*Usage: prints the rounded amount of gallons of paint it takes to paint
*a room based off it's length, width, and height.
*This function accepts three float values being length, width, and height
*which have a unit of feet. It should compute the area of all four walls and
*the ceiling area in order to find the overall square footage to be covered by
*the paint. It should then find the sum of the area to be covered and find the
*nearest whole gallon of paint needed. It will assume no doors or windows in the
*calculation as well as a conversion of one gallon of paint covers four-hundred
*sqaure feet.
*/


#endif