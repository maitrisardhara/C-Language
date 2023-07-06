#include<stdio.h>
#include<string.h>

struct Student{
	  
    int stu_id;
    char stu_name[100];
    int stu_age;
    char stu_course[100];
    char stu_city[100];
    int stu_std;
    char stu_school[100];
 
};

int main(){
   
   struct Student stu[1];
   int i;
   
   for(i=0; i<1; i++){
   	
   	printf("Enter Id : ");
   	scanf("%d", &stu[i].stu_id);
    
	printf("Enter Name : ");
   	scanf("%s",&stu[i].stu_name); 
	   
	printf("Enter Age : ");
   	scanf("%d", &stu[i].stu_age);   
	   
	printf("Enter Course : ");
   	scanf("%s", &stu[i].stu_course);    
	   
	printf("Enter City : ");
   	scanf("%s", &stu[i].stu_city);        
	
	printf("Enter Std : ");
   	scanf("%d", &stu[i].stu_std);  
	   
	printf("Enter School : ");
   	scanf("%s", &stu[i].stu_school);  
	   
	printf("\n");          	
   }
   
   for(i=0; i<1; i++){
   	
   	printf(" %d\n",stu[i].stu_id);	
	printf(" %s\n",stu[i].stu_name); 
    printf(" %d\n",stu[i].stu_age);
	printf(" %s\n",stu[i].stu_course);
	printf(" %s\n",stu[i].stu_city);
	printf(" %d\n",stu[i].stu_std); 
	printf(" %s\n",stu[i].stu_school);      
	
   }
   
return 0;
}