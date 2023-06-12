#include<stdio.h>

int main(){
	
	int i=1;
	int n,sum;
	
	printf("Enter th value:");
	scanf("%d",&n);
		
	do{
		sum =sum+i;
		i++;
		
	}
	while(i<=n);
	
	printf("Sum : %d\n",sum);
	
	return 0;
}
