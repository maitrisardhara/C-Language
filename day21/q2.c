#include<stdio.h>
#include<string.h>
int main()
{
	char *email;
	char *password;
	
	printf("Enter the email : ");
	scanf("%d",email);

	printf("\nEnter the password : ");
    scanf("%d",password);

	if(strcmp(email, "maitrisardhara90@gmail.com") == 0){
	
		if(strcmp(password, "maitri@1402") == 0){
		
			printf("\nUser successfully logged in...");
		}else{
		
			printf("\nPassword entered is invalid");
		}
	}else{
		
		printf("\nEmail entered is invalid");
	}

	return 0;
}
