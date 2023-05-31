#include<stdio.h>

int main()
{
	int x;
	int y;
	int z;
	int ans;
	
	printf("Enter the value of X:");
	scanf("%d",&x);
	
	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	printf("Enter the value of Z:");
	scanf("%d",&z);
	
	ans = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("The ans is: %d",ans);
}
