#include <stdio.h>

/*
 * Pointer Comparison Limitations:
 * -------------------------------
 * ✅ Allowed:
 *   - Comparing pointers using relational operators: ==, !=, <, >, <=, >=
 *   - Subtracting pointers of the same type (gives distance in elements)
 *   - Checking for NULL before dereferencing
 *
 * ❌ Not Allowed:
 *   - Comparing pointers of different types (e.g., int* vs float*)
 *   - Performing arithmetic or comparisons on void pointers directly
 *   - Using bitwise, multiplication, or division operations on pointers
 *
 * Notes:
 * - Pointer comparisons are meaningful only within the same array or memory block.
 * - Subtracting pointers gives the number of elements (not bytes) between them.
 */

int main()
{
    // Declare and initialize an integer array
    int arr[5] = {10, 20, 30, 40, 50};

    // Declare pointers
    int *p;            // Uninitialized pointer
    int *p1 = &arr[0]; // Points to the first element
    int *a, *b;

    // Assign pointers to specific elements
    a = &arr[0];       // Points to arr[0]
    b = &arr[1];       // Points to arr[1]

    // Set pointer p to NULL
    p = NULL;

    // Check if pointer is NULL
    if (p == NULL)
        printf("p is NULL\n");

    // Check if pointer is not NULL before dereferencing
    if (p1 != NULL)
        printf("arr[0] = %d\n", *p1);

    // Compare pointer addresses
    if (a < b)
        printf("b is ahead of a in memory\n");

    // Pointer subtraction: gives element distance
    printf("a - b = %ld\n", a - b); // Negative value
    printf("b - a = %ld\n", b - a); // Positive value

    // Additional pointer comparisons
    if (a == &arr[0])
        printf("a points to arr[0]\n");

    if (b != &arr[0])
        printf("b does not point to arr[0]\n");

    if (b > a)
        printf("b is at a higher address than a\n");

    if (a <= b)
        printf("a is before or at the same location as b\n");

    if (b >= a)
        printf("b is after or at the same location as a\n");

    return 0;
}