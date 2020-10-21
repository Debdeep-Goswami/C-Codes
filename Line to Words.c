#include <stdio.h>
#include<limits.h>
#define MAX 1000

int readLine(char *string)
{	

	/***************************************************************
		Use		:-	To reads a complete line from stdin/console
		
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
int lineToWords(char string[],char (*word_list)[MAX])
{
	/***************************************************************
		Use			:-	To convert a line into a list of words
		
		Arguments	:-	The line and The char array where the line will be stored
		
		Return 		:-	The length of the line
		
	***************************************************************/
	int words=0;
	int character=0;
	int i=0;

	while(1)
	{
	    if(string[i]=='\0' || string[i]=='\n')
	    {
	        word_list[words++][character]=string[i];
	        break;
	    }
		else if(string[i] == ' ')
		{
			word_list[words][character]='\0';
			character=0;
			words++;
		}
		else
			word_list[words][character++]=string[i];
		i++;
	}
	return words;

}

int main()
{
	char string[MAX];
	char word_list[MAX][MAX];
	printf("\nEnter the line = ");
	int len=readLine(string);
	printf("\nString is = %s\n",string);
	printf("\nLength is the string is = %d\n",len);
	int words=lineToWords(string,word_list);
	printf("\nNumber of Words inside = %d\n",words);
	printf("\nWords are = ");
	printf("[ ");
	for(int i=0;i<words;i++)
	{
		printf("%s",word_list[i]);
		if(i==words-1)
			break;
		printf(", ");
	}
	printf(" ]");
	return 0;
}
