#include<stdio.h>
#include<string.h>

void len(char *a){
	
	int length = 0;
	
	while(*a != '\0'){
		
		length++;
		a++;
	}
	
}

int main(){
	
	char a[100];
	
	printf("Enter string : ");
	scanf("%s",a);
	
    int length = strlen(a);
	
	printf("Length of string : %d\n",length);
	
	return 0;
}