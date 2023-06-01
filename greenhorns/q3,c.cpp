#include<stdio.h>

int main()
{
	int c;
	float f;
	
	printf("Enter the temperature in C:");
	scanf("%d",&c);
	
	f = (c * 1.8) + 32;
	printf("The temperature in F is: %.1f",f);
	
	return 0;
}
