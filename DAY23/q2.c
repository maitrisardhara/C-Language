#include <stdio.h>

void divisible(int num) {
	
    if (num % 3 == 0 && num % 5 == 0) {
    	
        printf("%d is divisible by both 3 and 5\n", num);
        
    }
	 
	   else {
	   	
        printf("%d is not divisible by 3 or 5\n", num);
        
    }
}

int main() {
	
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    divisible(num);

    return 0;
}
