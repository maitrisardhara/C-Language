#include<stdio.h>

void sum(int a, int b){
	
	printf("Sum : %d\n\n",a+b);
	
}

int main(){
	int a,b;
	char sign;
	 
	while(1){
	 
	printf("Enter First Value : ");
	scanf("%d",&a);
	 
	printf("Enter Second Value  : ");
	scanf("%d",&b);
	
	printf("+, -, *, /\n\n");
	
	printf("Make Your Selection : ");
	scanf(" %c",&sign);
	
	switch(sign){
		
		case'+':
			sum(a,b);
			break;
			
	    case'-':
			sum(a,b);
			break;
			
		case'*':
			sum(a,b);
			break;
			
		case'/':
			sum(a,b);
			break;
		
		
	}
}
	 return 0;
}
