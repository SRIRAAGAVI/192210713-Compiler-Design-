#include <stdio.h>

// Function definitions for demonstration
int x = 0;
int f1() {
    x = 5;
    return x;
}
int f2() {
    x = 10;
    return x;
}

int main() {
    // Example 1: Operator precedence
    int exp = 100 + 200 / 10 - 3 * 10;
    printf("100 + 200 / 10 - 3 * 10 = %d\n", exp);

    // Example 2: Associativity is not used, output is compiler dependent
    int p = f1() + f2();
    printf("x after f1() + f2() = %d\n", x);

    // Example 3: Comma operator
    int a;
    a = (1, 2, 3); // Comma operator, result is the rightmost value
    printf("Result of a = (1, 2, 3) is %d\n", a);

    // Example 4: Comparison operator associativity
    int a1 = 10, b = 20, c = 30;

    // (c > b > a) is treated as ((c > b) > a), associativity of '>'
    // is left to right. Therefore the value becomes ((30 > 20) > 10)
    // which becomes (1 > 10) -> FALSE
    if (c > b > a1)
        printf("Comparison (c > b > a) results in: TRUE\n");
    else
        printf("Comparison (c > b > a) results in: FALSE\n");

    return 0;
}