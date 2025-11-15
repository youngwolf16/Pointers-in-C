/*
    Program : Pointers Syntax
    Language: C
    Author  : S Sanjay Kumar

*/

#include <stdio.h>  // Include standard input/output library

int main()           // Main function where execution starts
{
    int a = 100;     // Declare an integer variable 'a' and assign it the value 100
    int *ptr = &a;   // Declare a pointer 'ptr' and store the address of variable 'a'

    printf("%d\n", a);       // Print the value of 'a' directly
    printf("%d\n", *ptr);    // Print the value of 'a' using the pointer (dereferencing)
    printf("%d\n", &a);      // Print the address of 'a'
    printf("%d\n", ptr);     // Print the address stored in 'ptr' (which is &a)
    printf("%d\n", &ptr);    // Print the address of the pointer variable itself

    return 0;        // Return 0 to indicate successful execution
}