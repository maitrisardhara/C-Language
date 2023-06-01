#include<stdio.h>

int main()
{
	int bs;
	float hra,da,ta,gs;
	
	printf("Enter the salary: ");
	scanf("%d",&bs);
	
	hra=(10.0/100.0) * bs;
	da=(5.0/100.0) *  bs;
	ta=(8.0/100.0) * bs;
	
	gs=bs+hra+da+ta;
	
	printf("The Gross Salary is: %.1f", gs);
	
	return 0;
}
