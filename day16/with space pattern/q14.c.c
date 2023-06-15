#include<stdio.h>

int main(){
	int i,k,j;
	for(i=0;i<=5;i++){
	char ch='A';
	
		for(k=0;k<=5-i;k++){
		printf(" ");
	}
		
		for(j=i;j>=1;j--){
		printf("%c",ch++);
		
	}
	printf("\n");
   }
    return 0;
}

	