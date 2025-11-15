/*
    Program : call by value
    Language: C
    Author  : S Sanjay Kumar

*/


#include <stdio.h>  // Include the standard input/output library for using printf

// Function definition: 'set' takes an integer parameter 'a'
void set(int a)
{
    a = 0;  // Set the local copy of 'a' to 0 (does not affect the original 'a' in main)
    printf("Set : In set function a = %d\n", a);  // Print the value of 'a' inside the set function
}

int main()  // Main function where program execution begins
{
    int a = 10;  // Declare an integer variable 'a' and initialize it to 10

    // Print the value of 'a' before calling the set function
    printf("Main : Before Calling set function a = %d\n", a);

    set(a);  // Call the 'set' function and pass 'a' by value (not by reference)

    // Print the value of 'a' after calling the set function
    printf("Main : After Calling set function a = %d\n", a);

    return 0;  // Return 0 to indicate successful program termination
}