#include<stdio.h>

 int main()
 
 {
 	int i=1;
 	int n;
 	int factorial=1;
 	
 	printf("Enter Value :");
 	scanf("%d",&n);
 	
 	do{
 		
 		factorial = factorial * n;
 		
 		n--;
	 }
	 
	 while(i<=n);
	 	printf("Factorial : %d\n", factorial);
	 	
	 	return 0;
	 
 }
