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
	
	ans = (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	
	printf("The ans is: %d",ans);
}
