//FileName:		guessGame.h
//Project:		Assignment2-Makefile
//Author:		Alex Guerrero	
//Date:			February 9, 2014
//Description:	This header file contains the libraries, warning disables, structures, 
//				constants and function prototypes required by the program to function properly.
//				This program generates a random number and asks the user to enter a number between the range specified to guess a number.
//				If the guess is too high, too low or correct, the user is informed.  If the user is correct, the program exits, otherwise the 
//				program loops again to allow the user to guess again.


//include files
#include<stdio.h>
#include <time.h>
#include <stdlib.h>



//disables a warning to allow the use of the getNum()
#pragma warning(disable: 4996)



//constants
#define kOne 1
#define UPPERLIMIT 101
#define MINVALUE 0
#define MAXVALUE 100



//function prototypes
void assessGameInput(int guessNumber, int *p, int randomNumber);
int getNum(void);
int rangeCheck(int value, int minValue, int maxValue);