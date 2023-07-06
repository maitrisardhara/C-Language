#include<stdio.h>
#include<string.h>

struct Employee{
	  
   int emp_id;
   char emp_name[100];
   int emp_age;
   char emp_role[100];
   char emp_city[100];
   int emp_experience;
   char emp_company_name[100];
 
};

int main(){
   
   struct Employee emp[1];
   int i;
   
   for(i=0; i<1; i++){
   	
   	printf("Enter Id : ");
   	scanf("%d", &emp[i].emp_id);
    
	printf("Enter Name : ");
   	scanf("%s",&emp[i].emp_name[100]); 
	   
	printf("Enter Age : ");
   	scanf("%d", &emp[i].emp_age);   
	   
	printf("Enter Role : ");
   	scanf("%s", &emp[i].emp_role[100]);    
	   
	printf("Enter City : ");
   	scanf("%s", &emp[i].emp_city[100]);        
	
	printf("Enter Experience : ");
   	scanf("%d", &emp[i].emp_experience);  
	   
	printf("Enter Company Name : ");
   	scanf("%s", &emp[i].emp_company_name[100]);  
	   
	printf("\n");          	
   }
   
   for(i=0; i<1; i++){
   	
   	printf(" %d\n",emp[i].emp_id);	
	printf(" %s\n",emp[i].emp_name); 
    printf(" %d\n",emp[i].emp_age);
	printf(" %s\n",emp[i].emp_role[100]);
	printf(" %s\n",emp[i].emp_city[100]);
	printf(" %d\n",emp[i].emp_experience); 
	printf(" %s\n",emp[i].emp_company_name[100]);      
	
   }
   
return 0;
}