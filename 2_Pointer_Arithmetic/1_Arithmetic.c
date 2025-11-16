#include <stdio.h>

/*
 * Pointer Arithmetic Limitations:
 * -------------------------------
 * - You can only perform addition and subtraction on pointers.
 * - Multiplication, division, and bitwise operations are NOT allowed directly on pointers.
 * - Pointer arithmetic is scaled by the size of the data type it points to.
 *   For example:
 *     - int* ptr + 1 moves by sizeof(int) bytes.
 *     - char* ptr + 1 moves by sizeof(char) bytes (typically 1 byte).
 *     - float* ptr + 1 moves by sizeof(float) bytes.
 *     - double* ptr + 1 moves by sizeof(double) bytes.
 */

int main()
{
    // Integer pointer arithmetic
    int i = 100;
    int *iptr = &i;

    printf("Integer Pointer Arithmetic:\n");
    printf("iptr       = %p\n", iptr);
    printf("iptr + 1   = %p\n", iptr + 1);
    printf("iptr + 2   = %p\n", iptr + 2);
    printf("iptr + 4   = %p\n", iptr + 4);
    printf("iptr - 1   = %p\n", iptr - 1);
    printf("iptr - 2   = %p\n", iptr - 2);
    printf("iptr - 4   = %p\n\n", iptr - 4);

    // Character pointer arithmetic
    char c = 'A';
    char *cptr = &c;

    printf("Character Pointer Arithmetic:\n");
    printf("cptr       = %p\n", cptr);
    printf("cptr + 1   = %p\n", cptr + 1);
    printf("cptr + 2   = %p\n", cptr + 2);
    printf("cptr + 4   = %p\n", cptr + 4);
    printf("cptr - 1   = %p\n", cptr - 1);
    printf("cptr - 2   = %p\n", cptr - 2);
    printf("cptr - 4   = %p\n\n", cptr - 4);

    // Float pointer arithmetic
    float f = 3.14f;
    float *fptr = &f;

    printf("Float Pointer Arithmetic:\n");
    printf("fptr       = %p\n", fptr);
    printf("fptr + 1   = %p\n", fptr + 1);
    printf("fptr + 2   = %p\n", fptr + 2);
    printf("fptr + 4   = %p\n", fptr + 4);
    printf("fptr - 1   = %p\n", fptr - 1);
    printf("fptr - 2   = %p\n", fptr - 2);
    printf("fptr - 4   = %p\n\n", fptr - 4);

    // Double pointer arithmetic
    double d = 6.28;
    double *dptr = &d;

    printf("Double Pointer Arithmetic:\n");
    printf("dptr       = %p\n", dptr);
    printf("dptr + 1   = %p\n", dptr + 1);
    printf("dptr + 2   = %p\n", dptr + 2);
    printf("dptr + 4   = %p\n", dptr + 4);
    printf("dptr - 1   = %p\n", dptr - 1);
    printf("dptr - 2   = %p\n", dptr - 2);
    printf("dptr - 4   = %p\n", dptr - 4);

    return 0;
}