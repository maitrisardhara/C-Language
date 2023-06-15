#include <stdio.h>

int main() {
   
    int i, j,k;
     for (i = 1; i <=5; i++) {
       for (k = 1; k < i; k++) {
            printf(" ");
    }
        ;
        for (j = 1; j <=6-i; j++) {
        	if(i%2==0){
        		printf("0");
			}else{
				printf("1");
			}
			   
           
        }
        
        printf("\n");
    }
    
    return 0;
}
