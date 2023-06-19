#include<stdio.h>

int main(){
	int m,n;
	printf("Enter size of row : ");
	scanf("%d",&m);
	
	printf("Enter size of column : ");
	scanf("%d",&n);
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter value [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
					}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",a [i][j]);
			
		}
			printf("\n");
	}
	return 0;
}
