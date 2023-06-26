#include<stdio.h>

int main(){
	char val;
	printf("Enter value : ");
	scanf("%c",&val);
	if(val>='a'&&val<='z'){
		val-=32;
	}
		printf("%c",val);
	return 0;
}
