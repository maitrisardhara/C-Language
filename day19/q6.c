#include<stdio.h>

int main(){
	int a[20][20],i,j,n,sum[10]={0},sum1[10]={0};
	printf("Enter number of row : ");
	scanf("%d",&n);
	printf("Enter element : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter element [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum1[i]=sum1[i]+a[j][i];
			
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
		printf("%d\t",sum1[i]);
	}
	return 0;
}
