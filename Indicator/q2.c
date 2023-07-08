#include<stdio.h>

int main(){
	
	int arr[20],*b[20];
	
	int i,n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		b[i] = &arr[i];
		
		printf("Enter array elements : ");
		scanf("%d",&arr[i]);
	}
	
	return 0;
}