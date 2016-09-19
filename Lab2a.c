/*
 ============================================================================
 Name        : Lab2a.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//define variables
	int choice=10;
	int i=0;
	unsigned short fac=1;
	unsigned long facans=0;
	unsigned int year=0;
	float num1=0;
	float num2=0;
	int top=0;
	int bot=0;
	float ans=0;

	while(choice!=0)
	{
		printf("Welcome to this program!!\n");
		printf("Another comment23");
		printf("Another comment2");
		printf("\nSelect a Program\n1: Factorial Calculator\n2: Leap Year Calculator\n"
							"3: Maximum Calculator\n4: Division\n0: Exit\n"); //asks for user input
		scanf("%d", &choice);
		while(choice<0||choice>4) //take valid user input
		{
			printf("\nSelect a Program\n1: Factorial Calculator\n2: Leap Year Calculator\n"
					"3: Maximum Calculator\n4: Division\n0: Exit\n"); //asks for user input
			scanf("%d", &choice);
		}

		switch(choice){
		case 1: //factorial calculator
			printf("\nEnter a # lower than or equal to 20 to perform factorial on: ");
			scanf("%hu", &fac);
			while(fac>20){ //error checks to avoid overflow
				printf("\nEnter a # lower than or equal to 20 to perform factorial on: ");
				scanf("%hu", &fac);
			}
			facans=1;
			for(i=(int)fac; i>0; i--) //performs factorial
			{
				facans=(unsigned long)i*facans;
			}
			printf("The factorial of %u is %lu\n", fac, facans); //prints result
			break;

		case 2: //Leap year calculator
			printf("\nInput a year to see if it's a leap year: ");
			scanf("%u", &year);
			if(year%4==0){ //checks if year is multiple of 4
				printf("%u is a leap year!\n", year);
			}else
				printf("%u is not a leap year\n", year);
			break;

		case 3: //Maximum Calculator
			printf("\nEnter first number: ");
			scanf("%f", &num1);
			printf("Enter Second number: ");
			scanf("%f", &num2);
			printf("The maximum value is %.2f\n", (num1>num2)?num1:num2); //prints max
			break;

		case 4: //Division of 2 numbers
			printf("\nEnter first number: ");
			scanf("%d", &top);
			printf("Enter second number that is not zero: ");
			scanf("%d", &bot);
			while(bot==0) //ensure non zero devision
			{
				printf("Enter second number that is not zero: ");
				scanf("%d", &bot);
			}
			ans=((float)top)/((float)bot); //performs division
			printf("%d divided by %d is %.2f\n", top, bot, ans); //prints answer
			break;

		default: //exits program
			printf("Exiting Program\n");
			return 0;
			break;
		}
	}
	return 0;
}
