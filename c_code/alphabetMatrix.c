#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int albhabetsInt[26];
	int charArrey[26][26],charArreySmall[26][26];
	char key[100],readKey[100],text[100];
	int i ,j;
	


	for( i = 0; i < 26; i++)
	{
		for( j = i; j < 26+i; j++)
		{
		    if (j>=26) {
		        charArrey[i][j-i]= j-26+65;
		    }
		    else{
		        charArrey[i][j-i]= j+65;
		    }   
		}   
	}

	for( i = 0; i < 26; i++)
	{
		for( j = i; j < 26+i; j++)
		{
		    if (j>=26) {
		        charArreySmall[i][j-i]= j-26+97;
		    }
		    else{
		        charArreySmall[i][j-i]= j+97;
		    }   
		}   
	}


	for ( i = 0; i < 26; ++i)
	{
		for ( j = 0; j < 26; ++j)
		{
			printf(" %c", charArrey[i][j]);
		}
		printf("\n");
		
	}


	

	

	//system("clear"); 
	
}
