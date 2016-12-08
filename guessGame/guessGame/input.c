//FileName:		input.c
//Project:		Assignment2-Makefile
//Author:		Alex Guerrero	
//Date:			February 9, 2014
//Description:	This file contains the function required to get data from an outside source.



//include file
#include"guessGame.h"



//FunctionName: getNum
//Description:  gets user inputted numbers from the keyboard
//Parameters:	void
//Return Values: number
int getNum(void)
{
    //array is 121 bytes in size and variable record stores the string
    char record[121] = {0};
    int number = 0;

    //fgets() is used to get a string from the keyboard
    fgets(record, 121, stdin);
	printf("\n");
    //extract a number from the string; sscanf() returns a number
    //corresponding with the number of items found in the string
    //if the user did not enter a number recognizable by the system,
    //set number to -1
    if( sscanf(record, "%d", &number) != 1 )
    {
        number = -1;
		printf("did not locate an integer.\n");
    }
    return number;
}