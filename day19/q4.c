#include<stdio.h>

int main(){

     int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter first matrix element \n ");
	     for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("Enter number [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
	
		}
	}
	printf("\nEnter  second  matrix element : \n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter number [%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
				
			}
	}
	printf("\n First matrix ...\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",a[i][j]);
		}
	
	printf("\n");
}
	printf("\n Second matrix ...\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n sum of two matrix...\n ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
		return 0;
}
	
