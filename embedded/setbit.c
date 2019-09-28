#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argv, char *argc[]){
    if (argv > 1) {
        int value = atoi(argc[1]);
        value = value | (128>>3);
        printf("\nResult: %d\n",value);
    }
    else{
        exit(1);
    }
    
}