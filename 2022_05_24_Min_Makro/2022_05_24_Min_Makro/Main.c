//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_05_24_Min_Makro	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 5/24/2022 7:33:33 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()
#define MIN(x,y,z) ( (x) < (y) ? ( (x) < (z) ? (x) : (z) ) : ( (y) < (z) ? (y) : (z) ) )


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int a = 0;
	int b = 0;
	int c = 0;



	//Code
	printf("Bitte drei Zahlen eingeben\n");

	printf("\nZahl 1: ");
	scanf("%i", &a);
	printf("\nZahl 2: ");
	scanf("%i", &b);
	printf("\nZahl 3: ");
	scanf("%i", &c);

	printf("Kleinste Zahl ist: %i", MIN(a, b, c));



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}