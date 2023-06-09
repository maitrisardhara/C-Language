#include<stdio.h>

int main(){
	
	int i=1;
	int n;
	int multiplication=1; 
		
	printf("Enter value :");
	scanf("%d",&n);
	
	
	while(i<=n){
		
	multiplication = multiplication*n;
	n--;
	
	}
	
	printf("multiplication  : %d\n",multiplication );
	
	return 0;

}
