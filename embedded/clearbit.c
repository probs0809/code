#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc > 1){
        int value = atoi(argv[1]);
        value = value & ~(1<<5);
        printf("\n%d\n",value);
    }else{
        printf("\nPlease pass the argument\n");
    }
}