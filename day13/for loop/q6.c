#include<stdio.h>

int main()
{
	int i,n;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=1 ; n>=i ; n--){
		
		if(n%2==0)
		printf("%d\n",n);
	}
	return 0;
}
