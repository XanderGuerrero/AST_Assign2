//FileName:		output.c
//Project:		Assignment2-Makefile
//Author:		Alex Guerrero	
//Date:			February 9, 2014
//Description:	This file contains the functions required to display information back to the user.



//Include file
#include"guessGame.h"



//FunctionName: int assessGameInput()
//Description:  this function assesses the user guess and the number generated by the proram to determine if the guess was too high,
//				too low or correct.  The function also changes the value of the variable exit through pass by reference method to 
//				affect the flow of the program based on the guess assessment, to either exit the program or loop to let the user enter a new number.
//Parameters:	int guessNumber, int *p, int randomNumber
//Return Values: number
void assessGameInput(int guessNumber, int *p, int randomNumber)
{
		if(guessNumber == randomNumber)
		{
			printf("Correct!\n");
			*p = 0;
		}
		if(guessNumber < randomNumber)
		{
			printf("Number is too low!\n");
			*p = -1;
		}
		if(guessNumber > randomNumber)
		{
			printf("Number is too high!\n");
			*p = 1;
		}
}



//FunctionName: rangeCheck
//Description: checks the user inputted data for the correct range. 1-25 for bases, 1-5 for exponents
//Parameters: int value, int minValue, int maxValue
//Return Values: valueOfRange

int rangeCheck(int value, int minValue, int maxValue)
{
    //varialbe used for return value
    int valueOfRange = 0;

    //if the user inputted data is out of range, return 1, if data is in range, return 0
    //if data is out of range, user is informed with a printf statement
    if( value < minValue || value > maxValue )
    {
        printf("ERROR: The value entered is out of range\n\nValues must be between 0 and 100 inclusive.\n\n");
        valueOfRange = 1;
    }
    else
    {
        valueOfRange = 0;
    }

    return valueOfRange;
}