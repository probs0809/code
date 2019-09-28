#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void run(int,int);
int main(){
    usleep(199900);
    char in[10];
    run(0,0);
    int m=0,n=0;
    run(0,0);
    while(1){
        // usleep(199900);
        // run(5,5);
        // usleep(199900);
        // run(5,6);
        // usleep(199900);
        // run(5,7);
    }
    
} 
void run(int x, int y)
{
 	int i, j, n=10,k=0;
 	char load[1000];
     for( i = 0; i <= n; i++)
     {

         for( j = 0; j <= n; j++)
         {
             if ( i==0 || i==n || j==0 || j == n) {
                 load[k++] = ' ';
                 load[k++] = '*';
             }
             else if( i ==x && j==y){
                 load[k++] = ' ';
                 load[k++] = '*';
             }
             else if ((j==2 && ( i!=1)) ) {
                load[k++] = ' ';
                load[k++] = '*';
             }
             else if(i>=2 && (j>1)){
                if((i*j)%2==0){
                    load[k++] = ' ';
                    load[k++] = '*';
                }
                else
                {
                    load[k++] = ' ';
                    load[k++] = ' ';
                }
                
                
             }
             else
             {
                load[k++] = ' ';
                load[k++] = ' ';
             } 
             
         }
        load[k++]='\n';
        system("clear");
        puts(load);
         
     }

}