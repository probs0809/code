#include <stdio.h>
#include<stdlib.h>
#define POLYNOMIAL 0xD8

int main(){
    unsigned int message = 0xA1;
	printf("\nCRC is %d \n", crc(message));
}

int crc(unsigned int message){
    unsigned int remainder = message;
    for(int bit = 0; bit <8;bit++){
        if(remainder & 0x80){
            remainder ^= POLYNOMIAL;
        }
        remainder = remainder << 1;
    }
    return (remainder >> 4);
}