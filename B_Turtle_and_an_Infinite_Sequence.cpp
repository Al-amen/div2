#include <stdio.h>

int computeBitwiseOR(int x, int a, int b) {
    int result;

    // Find the position of the most significant bit in 'b'
    int p = 0;
    while ((1 << p) <= b) {
        p++;
    }
    
    // Calculate 'mask' as (1 << p) - 1
    int mask = (1 << p) - 1;

    // Compute 'result' as 'x' bitwise OR 'mask'
    result = x | mask;

    // Compute 'start' as 'a' bitwise OR 'mask'
    int start = a | mask;

    // Compute 'end' as 'b' bitwise AND with the bitwise complement of 'mask'
    int end = b & (~mask);

    // Compute 'result' as 'result' bitwise OR 'start' bitwise OR 'end'
    result |= start | end;

    return result;
}

int main() {
    int x = 5; // example value for x
    int a = 2, b = 1000000000; // example values for a and b (up to 10^9)

    int result = computeBitwiseOR(x, a, b);
    printf("Result: %d\n", result);

    return 0;
}
