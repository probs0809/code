#include<stdio.h>
#define POLYNOMIAL 0xD8

int main(){
    unsigned int message = 0xA1;
    printf("\n CRC is %d \n",crc(message));
    return 0;
}

int crc(unsigned int message){
    unsigned int remainder , bit;
    remainder = message;
    for( bit = 8; bit>0; --bit)
    {
       
        if(remainder & 0x80){
            remainder ^= POLYNOMIAL;
        }
        remainder = (remainder << 1);
    }
    return (remainder >> 4);
    
}