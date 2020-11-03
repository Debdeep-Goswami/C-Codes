#include<stdio.h>

//	Defining Global declaration of the Bool variable and Keepin it's name as Bool
typedef enum Bool {False,True} Bool;

//	Flase = 0 and True =1 will be assigned automatically

int main() 
{
	//	Declaraing a variable of type Bool
	Bool b;
	
	//	Assign value of that variable
	b=False;
	
	if(b)	//	-> if b!=0
		printf("\nYes");
	else
		printf("\nNo");

	return 0;
}