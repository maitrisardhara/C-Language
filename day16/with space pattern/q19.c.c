#include<stdio.h>

int main(){
	int i,j,k;
	    for(i = 1; i <= 5; i++) {
        for(k = 1; k < i; k++)
            printf(" ");
        
        k=i%2;
        for(j = i; j <= 5; j++) {
            printf("%d", k);
            k = !k;
        }
        
        printf("\n");
    }
    
    return 0;
}


