#include <stdio.h>

int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * calculateFactorial(n - 1);
}

int main() {
    int num = 5; // Change this to calculate factorial of a different number
    int factorial = calculateFactorial(num);
    printf("%d! = %d\n", num, factorial);
    return 0;
}
