#include<stdio.h>

int main(){
	
	char ch;
	
	printf("Enter any characters :");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	
	{
		printf("It is alphabet");
		scanf("%c",ch);
	}
	
	else if(ch>='0' && ch<='9') 
	
	{
		printf("It is digit");
		scanf("%c",ch);
	}
	 
   else{
   	
    	printf("It is special character");
		scanf("%c",ch);
   }	 
	
	return 0;
}
