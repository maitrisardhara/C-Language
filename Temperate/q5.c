#include <stdio.h>

int main() {
	
    int n, reversedno = 0, originalno, remainder;

    printf("Enter value : ");
    scanf("%d", &n);

    originalno = n;

    while (n != 0) {
        remainder = n % 10;
        reversedno = reversedno * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversedno);


    if (originalno == reversedno) {
        printf("The number is a palindrome.\n");
    }
	
	   else {
	   	
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
