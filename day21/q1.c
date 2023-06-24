#include<stdio.h>
#include<string.h>

 int main(){
 	
 	int n;
 	
 	printf("Enter value of n :");
 	scanf("%d",&n);                             
 	
 	char pass[n];
 	int i, x=0, p;
 	
 	printf("Enter a password :");
 	scanf("%s",&pass);
 	
 	if(strlen(pass)>=6){
 		
 		p=strlen(pass);
 		for(i=0; i<p; i++){
 			
 	if((pass[i]>='a' && pass[i] <='z') || (pass[i]>='A' && pass[i] <='Z') || (pass[i]>='0' && pass[i] <='9') || (pass[i]>='33' && pass[i] <='48') || (pass[i]>='58' && pass[i] <='65') || (pass[i]>='123' && pass[i] <='127')){
 				
				 printf("Strong Password!");
				 
			 }
	    	else{
 				
 				printf("Try Again...");
 				
			 }
		 }	
		 
  }
   return 0;
 	
 }
