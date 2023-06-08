#include<stdio.h>

int main(){   

char a;
	 printf("Enter value:");
	 scanf("%c",&a);
	 
	 switch(a){
	 	
	 	case 'M':
	 		printf("Monday");
	 		break;
	 
	 	case 'T':
	 		printf("Tuesday");
	 		break;
		
		case 'W':
	 		printf("Wednesday");
	 		break;
			 
		case 't':
	 		printf("Thrusday");
	 		break;	 	 	
	 		
	 	case 'F':
	 		printf("Friday");
	 		break;
			 
	    case 'S':
	 		printf("Saturday");
	 		break;
	 		
	 	case 's':
	 		printf("Sunday");
	 		break;
}	

	
	return 0;
	
}
