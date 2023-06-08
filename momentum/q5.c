#include<stdio.h>

int main()
{
	int units;
	float total,amt,surcharge;
	
    	printf("Enter the units:");
    	scanf("%d",&units);
	
	if(units<=50){
		
		amt= units*0.50;
	}
	else if(units<=150){
		
		amt= ((units-50)*0.75 + 25);
	}
	else if(units<=250){
		
		amt= ((units-150)*1.20 + 100);
	}
	else{
		
		amt= ((units-250)*1.50 + 220);
	}
	
	surcharge= amt*0.20;
	
	total=amt+surcharge;
	
    	printf("The total amount is %.2f",total);
	
	return 0;
	
	}
