//FileName: guessGame.c
//ProjectName: Assignment2-Makefile
//Author: Alex Guerrero
//Date: February 09, 2014
//Description:  This program generates a random number and asks the user to enter a number between the range specified to guess a number.
//				If the guess is too high, too low or correct, the user is informed.  If the user is correct, the program exits, otherwise the 
//				program loops again to allow the user to guess again.



//include file
#include"guessGame.h"



int main(void)
{
	//Variable initialized
	int randomNumber = 0;
	int guessNumber = 0;
	int exit = 0;
	int rangeCheckValue = 0;

	//This section of code displays the game rules and instruction for the user
	printf("This is a guesing game.\n");  
	printf("Enter a whole number to guess the number I'm thinking.\n\n");
	printf("The number is between 0 and 100 inclusive.\n");
	printf("Based on the number you guess, I will tell you if the guess is too high,\n");
	printf("too low or correct.\n\n");

	//call srand(time(NULL)); to seed a random number, then call rand() to get a number, modulo it by
	//the UPPERLIMIT and assign its value to the randomNumber variable
	srand(time(NULL));
	randomNumber = rand() % UPPERLIMIT;

	//enter loop
	while(kOne)
	{
		while(kOne)
		{
			//prompts user to enter a number
			printf("Enter a number:	");

			//call getNum to get user Input, value is returned to guessNumber which holds the users input
			guessNumber = getNum();
			//guessNumber is passed to rangeCheck function to determine if the value is within the specified
			//range.  The value returned  is assigned to rangeCeckValue.  If the value is 1, the input is out of range
			//and the continue statement executes, returning the user to the beginning of the loop to re-enter a number
			rangeCheckValue = rangeCheck(guessNumber, MINVALUE, MAXVALUE);
			if(rangeCheckValue == 1)
			{
				continue;
			}
			//If the range of the value is within limits, the value is passed to the assessGameInput function
			//to assess if the gues is too high, low or correct. once assessed, the program exits the while loop.
			else
			{
				assessGameInput(guessNumber, &exit, randomNumber);
				break;
			}
		}
		 
		//based on the current value of exit, the program loops to get let the user choose another number if the
		//guess was too high or too low, or exits the game if the guess was correct.
		if(exit == 1 || exit == -1)
		{
			continue;
		}
		else if(exit == 0)
		{
			break;
		}
	}
	return 0;
}







