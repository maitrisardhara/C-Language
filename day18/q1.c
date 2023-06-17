#include<stdio.h>

int main(){
	int n,i;
	printf("Enter size of Array:");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++){
    	printf("Enter Elements[%d]:",i);
    	scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
    	printf("%d\t",a[i]);	
	}
	
	return 0;
}
