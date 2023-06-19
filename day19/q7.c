#include<stdio.h>

int main(){
	int  a[20][20],i,j,n,sum=0;
	printf("Enter row : ");
	scanf("%d",&n);
	printf("Enter element : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter element [%d][%d]\t",i,j);
			scanf("%d",&a[i][j]);
					}
	}
	printf("Matrix is ...\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	printf("Diagonal sum of [%d]",sum);
	
	return 0;
}
