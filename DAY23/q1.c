#include <stdio.h>

void cube() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num * num * num;

    printf("Cube of %d is %d\n", num, result);
}

int main() {
    cube();  

    return 0;
}
