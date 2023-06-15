#include<stdio.h>

int main(){
	int i,j,k;
	for(i=0;i< 5;i++){
		        for (k = 0; k < i; k++) {
            printf("   ");
        }
        int  num=1;
        
        for (j = i; j < 5; j++) {
            printf(" %d ",num);
            num=!num;
           
        }
        
        printf("\n");
    }
    return 0;
}