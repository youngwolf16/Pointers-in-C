/*
    Program : Double pointer
    Language: C
    Author  : S Sanjay Kumar

*/

#include <stdio.h>  // Include standard input/output library

int main()          // Main function where execution starts
{
    int a = 100;         // Declare an integer variable 'a' and assign it the value 100
    int *ptr = &a;       // Declare a pointer 'ptr' and store the address of variable 'a'
    int **dptr = &ptr;   // Declare a double pointer 'dptr' and store the address of 'ptr'

    // Print addresses and values
    printf("Address of a: %p\n", (void *)&a);     // Print the address of 'a'
    printf("Value of ptr (address of a): %p\n", (void *)ptr);  // Print the address stored in 'ptr'
    printf("Value of dptr (address of ptr): %p\n", (void *)dptr); // Print the address stored in 'dptr'

    printf("Value of a: %d\n", a);                // Print the value of 'a' directly
    printf("Value pointed by ptr: %d\n", *ptr);   // Print the value of 'a' using the pointer
    printf("Value pointed by dptr: %d\n", **dptr); // Print the value of 'a' using the double pointer

    return 0;  // Return 0 to indicate successful execution
}