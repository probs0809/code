#include<stdio.h>
#define POLYNOMIAL 0xD80

int main(){
    unsigned int message = 0xA1E;
    printf("\n CRC is %d \n",crc(message));
    return 0;
}

int crc(unsigned int message){
    unsigned int remainder , bit;
    remainder = message;
    for( bit = 8; bit>0; --bit)
    {
       if (remainder & 0x800) {
           remainder ^=POLYNOMIAL;

       }
       remainder = (remainder << 1);
       if (remainder == 0 ) {
           printf("\n Message recieved successfully \n");
           return (remainder);
       }
    }
    printf("\nMessage not recieved successfully\n");
    return (remainder);
    
}