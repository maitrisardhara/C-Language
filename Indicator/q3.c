#include<stdio.h>

int main(){
	
	int n;
	int arr[n];
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int i;
	
	for(i=0;i<n;i++){
		printf("Enter array elements : ");
		scanf("%d",&arr[i]);
		
	}
	printf("Reversed array : \n");
	
	for(i=n-1;i>=0;i--){
		
		printf("%d\n",arr[i]);
	}
	
	return 0;
}