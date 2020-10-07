#include<stdio.h>
#include<string.h>
#define MAX 500

char * reverseWords(char *input_string)
{
	char temp[MAX][MAX];		//	Temporary 2D array to store each word

	int i=0,j=0,k=0;			//	Counters for various operations


	//	Loop to get all the words in the String

	int len=strlen(input_string);
	for(i=0;i<len;i++)
	{
		if(input_string[i]==' ')
		{
			temp[j][i]='\0';
			j++;
			k=0;
		}
		else
		{
			temp[j][k++]=input_string[i];
		}
	}

	//	Loop to generate the string with reverse words
	strcpy(input_string,"");
	for(i=j;i>=0;i--)
	{
		strcat(input_string,temp[i]);
		if(i!=0)
			strcat(input_string," ");
	}
}

void getData(char *input_string)
{
	printf("\nEnter the string (Maximum 499 Characters) = ");

	fgets(input_string,MAX-1,stdin);	//	Reading the input till New line or till maximum supported character limit
	input_string[strlen(input_string)-1]='\0';	//	Removing the last new line character from the input string

}

void getDataFile(char *input_string)
{
	FILE *fp=fopen("Input_data.txt","r");
	if(fp==NULL)
		printf("\nFile not found\n");
	else
	{
		fgets(input_string,MAX-1,fp);
		input_string[strlen(input_string)-1]='\0';
	}

}

int main()
{
	char input_string[MAX];		//	To store the input string
	
	//getData(input_string);		//	Function to get the input string from user
	getDataFile(input_string);

	puts(input_string);

	//printf("Length is %ld\n",strlen(input_string));
	
	reverseWords(input_string);
	
	puts(input_string);
	
	//printf("Length is %ld\n",strlen(input_string));

	return 0;
}