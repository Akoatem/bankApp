#include <stdio.h>
#include "bank.h"
#include <string.h>

int validatePass(const char* password)
{
	char val[20];
	int value;
	int i = 3;
	int passCorrect = 0; // use for password validation
	
	printf("Create a password: ");
	/*scanf("%s", password);*/
	printf("confirm password: ");
	scanf("%s", val);
    // using string compare for password authentication
    //

	value = strcmp(password, val);
	
	if (value != 0){
		
		while(1>= 0){
			printf("\n password incorrect\n");
			printf("Try again-enter password: ");
			scanf("%s", val);
			
			value = strcmp(password, val);
			if (value == 0){
				passCorrect = 1;
				break;
			}
			if (i > 0)
				printf("Password mismatch. You have %d more attemps", i);
			else
				printf("Sorry, you cant create an account");
			i--;
		}
	}else{
		return 1;  // password validation successful
	}
	return 0; // password validation fails
}
