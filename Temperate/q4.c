#include <stdio.h>

int main() {
    int n;
	int firstdigit;
	int lastdigit;
	int sum;
    
    printf("Enter value: ");
    scanf("%d", &n);
   
    firstdigit = n;
    
    while (firstdigit >= 10){
    	
        firstdigit /= 10;
    }
    
    lastdigit = n % 10;
    
    sum = firstdigit + lastdigit;
    
    printf("Sum of the first and last digit: %d\n", sum);
    
    return 0;
}



