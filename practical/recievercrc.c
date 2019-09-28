#include<stdio.h>
#define POLYNOMIAL 0xD80

int main(){
    unsigned int message = 0xA1E;
    printf("\nCRC is %d\n", crc(message));
    return 0;
}

int crc(unsigned int message){
    unsigned int remainder = message;
    for(int i = 0; i < 8; i++){
        if(remainder & 0x800){
            remainder ^= POLYNOMIAL;
        }
        remainder = remainder << 1;
        if(remainder == 0){
            printf("\nMessage recieved successfully\n");
            return remainder;
        }
        
    }
    printf("\nMessage not recieved successfully\n");
    return remainder >> 4;
    
}