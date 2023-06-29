#include<stdio.h>

int main(){
	
	int a;
	int b;
	int c;
	int *x,*y;
	
	printf("Enter Value of A :");
	scanf(" %d",&a);
	
	printf("Enter Value of B :");
	scanf(" %d",&b);
	
	x = &a;
	y = &b;
	
	c = *y;
   *y = *x;
   *x =  c;
   
   printf("After Swapping\na= %d\nb= %d\n",a,b);
   
   return 0;
   	
}