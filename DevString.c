/*******************************************************************
	Basic String Functions to use in programs by Debdeep
	
*******************************************************************/
	

#include <stdio.h>
#include <ctype.h>
#define MAX 1000


int readLine(char *string)
{	

	/***************************************************************
		Use			:-	To reads a complete line from stdin/console
		
		Arguments	:-	The char array where the line will be stored
		
		Return 		:-	The length of the line
		
	***************************************************************/
	
	//	To store the character read from the console
	char c;						
	
	//	To count the number of character read
	int i=0;					

	//	Main loop to read the characters
	while(1)
	{
		c=getchar();
		
		//	Stops as soon as a new line character or EOF is pressed
		if(c=='\n' || c==EOF)	
		{
			//	To mark the end of string
			string[i]='\0';		
			break;
		}
		//	To handle the backspace pressed
		if(c=='\b')
			continue;
		
		//	Stores the character read
		string[i++]=c;
	}
	
	//	Number of characters read
	return i;					
}

void show_char_array(char *line)
{
	/***************************************************************
		Use			:-	To display the charaters inside a string
		
		Arguments	:-	The char array to be displayed
		
		Return 		:-	void
		
	***************************************************************/
	
	//	Counter for the character displayed
	int i=0;
	
	printf("\n");
	
	//	Loop runs untill null character is read
	while(line[i])	
	{
		printf("\n[ %d ] = %c",i,line[i]);
		i++;
	}
	printf("\n");
}

int main()
{
	char line[MAX];
	char ch='\0';
	int i=0;
	
	printf("\nEnter the string = ");
	i=readLine(line);
	printf("\nLength is %d",i);
	printf("\n The string is = ");
	puts(line);
	
	show_char_array(line);
	/*printf("\nUpper String is ");
	puts(upper(line));
	printf("\nLower String is ");
	puts(lower(line));
	*/
	return 0;
}