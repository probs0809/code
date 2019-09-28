#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i,j,k;
    char text[100],str[100];
    char alphabets[26];
    for( i = 0; i < 26; i++)
    {
        alphabets[i] = i+65;
    }
    
    printf("Please Enter the text: \n");
    gets(text);
    j=0;
    for( i = 0; i < strlen(text); i++)
    {
        str[j] = text[i];
        j++;
        
    }

    for( i = 0; i < strlen(alphabets); i++)
    {
        str[j] = alphabets[i];
        j++;
        
    }
  	 	
  	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i] )  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}

    

    for( i = 0; i < 26; i++)
    {
        

        if (str[i] == 'I' && str[i+1]=='J') {
            for( k = i+1; k < 26; k++)
                    {
                        str[k] = str[k+1];
                    }
        }
        else if(str[i]=='I' || str[i]=='J') {
            for( j = i+1; j < 26; j++)
            {
                if (str[j]=='I'||str[j]=='J' ) {
                    for( k = j; k < 26; k++)
                    {
                        str[k] = str[k+1];
                    }
                    
                }
                
            }
            
        }
               
    }

    char pc[5][5];
    k=0;
    for( i = 0; i < 5; i++)
    {
        for( j = 0; j < 5; j++)
        {
            pc[i][j] = str[k];
            k++;
        }
        
    }

    for( i = 0; i < 5; i++)
    {
        for( j = 0; j < 5; j++)
        {
            printf(" %c",pc[i][j]);
        }
        printf("\n");
    }
    




}