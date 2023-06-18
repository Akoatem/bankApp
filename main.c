#include <stdio.h>
#include <stdlib.h>
#include "bank.h"

int main()
{
	printf("Hello, welcome to our bank!\n");
	
	char option;
	double balance = 1000.0;
    /*reate an account*/
	
	createAcct();
	
	char password[20];
	int passCorrect = 0;
	
	printf("Enter password: ");
	scanf("%s", password);
	
	passCorrect = validatePass(password);
	
	if(passCorrect){
		printf("Password is successful. Welcome to GTA Bank\n");
		printf("You have a free bonus of R1000, \nwhat do you want to do with it\n");
		
		while(1){
			printf("Menu:\n");
			printf("a. tranfer money\n");
			printf("b. deposit money\n");
			printf("c. check account balance\n");
			printf("d. quit the menu\n");
			
			printf("Select an option: ");
			scanf("%c", &option);
			
			switch(option){
				case 'a':
					printf("Option a:tranfer money\n");
					/*transferMoney(&balance, &lastTranferAmount);*/
					break;
				case 'b':
					printf("Option a: deposit money\n");
					/*code here*/
					break;
				case 'c':
					printf("Option a: check account balance\n");
					/*code here*/
					break;
				case 'd':
					printf("Option a: quit the menu\n");
					/*code here*/
					return 0;
			}
		}
	}
	return 0;
}
