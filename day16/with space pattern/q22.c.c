#include<stdio.h>

int main(){
	int i,j,k;
	for(i=0;i<5;i++){
			for(j=0;j<i;j++){
			printf("  ");
		}
		for(k=i;k<5;k++){
			if(k%2==0){
				printf("-");
			}else{
				printf("|");
				
				printf(" ");
		}
		
	}
	printf("\n");
	
}
return 0;
}