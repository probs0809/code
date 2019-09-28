#include<stdio.h>
#define POLYNOMIAL 0xD8

int main(){
    unsigned int message = 0xA1;
    printf("\nCRC is %d\n", crc(message));
    return 0;
}

int crc(unsigned int message){
    unsigned int remainder = message;
    for(int i=0; i<8;i++){
        if(remainder & 0x80){
            remainder ^= POLYNOMIAL;
        }
        remainder = remainder << 1;
    }
    return remainder >> 4;
}