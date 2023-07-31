#include<stdio.h>
#include<string.h>

main(){
	char password[16];


	char usarname[100];
	int i,lenght=0;

	printf("Enter Usarname = ");
	gets(usarname);
	   
	 printf("******Creat Password******\n");
	 
	 printf("Enter Password = ");
	 gets(password);  
	 
	 lenght=strlen(password);
	 if(lenght<6 || lenght>16)
	 
	{
		printf("Leght of Password most be in between 6 - 16\n");
	}
	 
	 for(i=0;password[i] != '\0';i++)
	 	{
	 		if(password[i] >= '0' && password[i] <= '9' ){
	 			
	 			printf(" ");
			 }
			 else{
			 	printf("Plz Enter Minimum one Number\n");
			 }
			 
		 }
		 
	 for(i=0;password[i]!= '\0';i++)
	 	{
	 		if(password[i] == '@','#','$','%','&','*','!','`','-','_' ){
	 			
	 			printf(" ");
			 }
			 else{
			 	printf("Plz Enter Minimum one Special Charchter Like : @,#,$,%,&,* etc..../n");
			 }
			 
		 }		 

	 for(i=0;password[i] != '\0' ;i++)
	 	{
	 		if(password[i] >= 'A' && password[i] <= 'Z' && password[i] >= 'a' && password[i] <= 'z' ){
	 			
	 			printf(" ");
			 }
			 
			 else{
			 	printf("Plz Enter Uppercase && Lowercase Alphabet/n");
			 }
			 
		 }			 
	 for(i=0;password[i]!=NULL;i++)
	 	{
	 		if(password[i] != ' ' ){
	 			
	 			printf(" ");
			 }
			 else{
			 	printf("Password Should not Contain any Space.../n");
			 }
			 
		 }		
		 
		 printf("Password is Strong : %s",password);	 
		 	 
	 
	
}
