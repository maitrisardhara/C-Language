#include<stdio.h>

int main(){
	
	int i=1;
	int n;
	int multiplication=1; 
		
	printf("Enter value :");
	scanf("%d",&n);
	
	do{
		
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
		
	}
	
	while(i<=10);
	
	return 0;
	
}
