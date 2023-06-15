#include<stdio.h>

int main(){
	int i,j,k;
	char letters[] = {'A', 'B', 'C', 'D', 'E'};
    int size = sizeof(letters) / sizeof(letters[0]);

    for ( i = 0; i < size; i++) {
        
        for (int j = 0; j < i; j++) {
            printf("  ");
        }

        
        for ( k = i; k < size; k++) {
            if (i <= k) {
                printf("%c ", letters[k]);
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
