#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter th value:");
	scanf("%d",&n);
		
	do{
		if(n%2==0)
		printf("%d\n",n);
		n--;
		
	}
	while(n>=i);
	
	return 0;
}
