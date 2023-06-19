#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int sum = 0;
    int i, j;

    for (i = 0, j = 3 - 1; i <3 && j >= 0; i++, j--) {
        sum += a[i][j];
    }

    printf("Cross-diagonal sum: %d\n", sum);

    return 0;
}
