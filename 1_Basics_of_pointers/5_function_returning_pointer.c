/*
    Program : function returning pointer
    Language: C
    Author  : S Sanjay Kumar

*/

#include <stdio.h>  // Include standard input/output library

// Function 'get' returns a pointer to an integer
int *get()
{
    static int i = 100;  // Declare a static integer variable 'i' and assign it the value 100
                         // 'static' ensures 'i' persists after the function ends, making it safe to return its address

    return &i;           // Return the address of 'i' (safe because 'i' is static)
}

int main()
{
    int *ptr = get();  // Call 'get' and store the returned pointer in 'ptr'

    // Print the address stored in 'ptr' using %p for pointer format
    printf("The address of i is %p\n", ptr);  // Cast to void* for portable pointer printing

    // Print the value pointed to by 'ptr'
    printf("The value of i is %d\n", *ptr);  // Dereference 'ptr' to get the value of 'i'

    return 0;  // Return 0 to indicate successful execution
}