#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>


int main(){
    
    for(size_t i = 0; i < 5; i++)
    {
        
        if (fork()==0) {
            printf("Hello World\n ");
            printf("%d",getppid());
            exit(0);
        }   
    }
    return 0;
}