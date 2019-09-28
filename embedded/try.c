#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc > 1){
        int value = atoi(argv[1]);
        if((value & 0x80) ){
            printf("The first bit is set\n");
        }
        else{
            printf("eighth bit is not set");
        }
    }
    else{
        printf("Please put argument");
    }
}