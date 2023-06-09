#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int factorial = 1;
    int i = 1;

    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("The factorial of %d is %d\n", n, factorial);

    return 0;
}
