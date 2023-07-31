#include<stdio.h>
#include<string.h>

main()
{
	char usarname[100] = "Prince",name[100];
	char password[100] = "Prince@123",pass[100];
	
	
	
	strcpy(name,usarname);
	strcpy(pass,password);
	printf("Enter Usarname = ");
	gets(name);
	printf("Enter Password = ");
	gets(pass);
	
	if(strcmp(usarname,name) == 0)
	{
		if(strcmp(password,pass) == 0)
		{
			printf("\n Successfully Log in....");
		}
		else
		{
			printf("\nPassword Wrong");
		}
	}
	else
	{
		printf("\n Usarname and Password Wrong");
	}
	
}
