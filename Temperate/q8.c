#include<stdio.h> 
  
int main(){ 
     
int number, i, isprime=1; 
  printf("Enter the number to check for prime : "); 
  scanf("%d",&number);
   
   if(number<=1 || number==3) ispime=0; 
   
     else { 

    for(i=2; i<sqrt(number); i++){ 
    
        if(number % i == 0) {  
            isprime = 0; 
            break; 
        } 
    } 
} 
   if(isprime == 1)
     printf("%d is a prime number",number);
	  
   else
    printf("%d is not a prime number",number); 
    
    return 0; 
}
