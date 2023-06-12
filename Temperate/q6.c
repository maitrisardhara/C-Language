#include<stdio.h>

int main()
{
	int i;
	int n,factorial=1;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; n--){
		
	factorial = factorial * n;
	
	}
	printf("Factorial : %d\n",factorial);
	return 0;
}
