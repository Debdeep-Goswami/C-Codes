#include <stdio.h>
#define MAX 300


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
		string[i++]=c;
	}
	
	//	Number of characters read
	return i;					
}

int main()
{
	char string[MAX];	//	To store the line

	printf("\nEnter the line = ");

	int len=readLine(string);
	puts(string);
	printf("Length is the string is = %d\n",len);
	
	return 0;
}
