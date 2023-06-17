#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    int length = sizeof(a) / sizeof(a[0]);

    printf("Length of the array: %d\n", length);

    return 0;
}
