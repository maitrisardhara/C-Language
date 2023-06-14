#include <stdio.h>

int main() {
    int num = 1;
    int rows = 5;
    int r,c;

    for (r=1; r<=rows; r++) {
        for (c=1; c<=r; c++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
