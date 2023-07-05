#include<stdio.h>

sum(int a[], int size){
	
	int c=0, i;
		
	for(i=0; i<size; i++){
			
		c += a[i];
		
	}
    	printf("Sum : %d",c);	
}
  int main(){
     
	int n;
	 
	printf("Enter Value :");
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0; i<n; i++){
		
		printf("Enter Value [%d] :",i);
		scanf("%d",&arr[i]);
		
	}
	
	sum(arr,n);
	
	return 0;	
  }