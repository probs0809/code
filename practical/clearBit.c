#include<stdio.h>

int main(int argc, char *argv[]){
    int value;
    if(argc > 1){
        value = atoi(argv[1]);
        value &= ~(1<<5);
        printf("Result: %d\n",value);
    }
    else{
        printf("Usage: ./checkBit 20 ");
    }
    return 0;

}