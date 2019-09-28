#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc > 1){
        int value = atoi(argv[1]);
        if((value & 0x08) != 0 ){
            printf("The eighth bit is set\n");
        }
        else{
            printf("eighth bit is not set");
        }
    }
    else{
        printf("Please put argument");
    }
}