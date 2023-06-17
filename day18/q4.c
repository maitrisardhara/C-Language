#include<stdio.h>

int main() {

   int a[5], sum=0, i, n;
   
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    
    for(i=0; i<5; i++){
    	printf("Enter Elements:");
    	scanf("%d",&a[i]);
	}
	printf("Sum of Array Elements:");
	for(i=0; i<5; i++){
      sum = sum+=a[i];
    }
    printf("%d", sum);
    return 0;
}
