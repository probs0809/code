#include<stdio.h>

int main(int argc, char *argv[]){
    int value;
    if(argc > 1){
        value = atoi(argv[1]);
        (value & (0xFFF))==0xFFF?printf("ALL bit is set \n"):printf("ALL bit is not set \n");
    }
    else{
        printf("Usage: ./checkBit 20 ");
    }
    return 0;

}