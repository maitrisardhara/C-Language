#include <stdio.h>

int main() {
    int a[5][5];

    int length = sizeof(a) / sizeof(a[0][0]);

    printf("Length of 2D array: %d\n", length);

    return 0;
}
