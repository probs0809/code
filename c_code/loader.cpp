// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
 
// int main()
// {
//  	int i = 0;
//  	char load[26];
//  	while(i < 25)
//  	{
//  		system("clear");
//  		load[i++] = '#';
//  		//load[i] = '\0';
 
// 		printf("\n\nLOADING %s", load);
//  		usleep(199900);
//  	}
 
//  system("clear");
//  printf("\n");
// }

#include<stdio.h>
#include <curses.h>
#include <unistd.h>
int main()
{
   int c;
   
   
while(1){
    usleep(199900);   
    c = getch();
    if(c=='a'){
        printf("Hello world");
    }
    // putchar(c);

}
  
   return 0;
}