#include<stdio.h>

int main(){
	int a[3][3],i,j,sum=0,average,m,n;
	printf("Enter row : ");
	scanf("%d",&m);
	
	printf("Enter column : ");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			printf("Enter value [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum+=a[i][j];
		
		}
		average =sum/n;
		printf("Average = %d",average);
		
	}
	printf("\n");
	
	
	
	return 0;
}
