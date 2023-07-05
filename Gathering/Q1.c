#include<stdio.h>
int fact(int a){
	
	if(a>=1){
		
		return a*fact(a-1);
		
	}
	else{
		return 1;
		
	}
}
  int main(){
     
	int n;
	 
	printf("Enter Value :");
	scanf("%d",&n);
	 
	printf("Factor of %d is %d",n,fact(n));
	 
	return 0;	
  }