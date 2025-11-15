/*
    Program : call by reference
    Language: C
    Author  : S Sanjay Kumar

*/

#include <stdio.h>  // Include the standard input/output library for using printf

// Function definition: 'set' takes a pointer to an integer as its parameter
void set(int *a)
{
    *a = 0;  // Dereference the pointer and set the value at that memory location to 0
    printf("Set : In set function a = %d\n", *a);  // Print the updated value of 'a' through the pointer
}

int main()  // Main function where program execution begins
{
    int a = 10;  // Declare an integer variable 'a' and initialize it to 10

    // Print the value of 'a' before calling the set function
    printf("Main : Before Calling set function a = %d\n", a);

    set(&a);  // Call the 'set' function and pass the address of 'a' (pass by reference)

    // Print the value of 'a' after calling the set function
    printf("Main : After Calling set function a = %d\n", a);

    return 0;  // Return 0 to indicate successful program termination
}