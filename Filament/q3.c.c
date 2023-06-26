#include<stdio.h>
#include<string.h>

int main(){
	
	char val[10],i;
	
	printf("Enter value :");
	scanf("%s",&val);
	
	if(val[0]>='a'&&val[0]<='z'){
		val[0]-=32;
	}
	for(i=1;i<strlen(val);i++){
		if(val[i]>='A'&&val[i]<='Z'){
		val[i]+=32;
	}
}
     printf("%s",val);
     
	return 0;
}
