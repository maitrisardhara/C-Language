#include<stdio.h>

int main(){
	
	int r,c;
	char ch = 'A';
	char ch = 'E';
	for(r=1; r<=5; r++){
	for(c=1; c<=r; c++){
		
		printf("%c\t",ch);
	}
	printf("\n");
}	
	return 0;
}
