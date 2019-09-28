#include<8051.h>
int delay(void);
int main(){
    while(1){
        P1 =0xff;
        delay();
        P1 =0x00;
        delay();
    } 
    return 1;
}

int delay(){
    unsigned int i;
    for( i = 0; i <= 10; i++)
    {
        _asm
        mov R0,400
        0002$: mov R1,400
        0001$: djnz R1,0001$
        djnz R0,0002$
        _endasm;
    }
    return 1;
    

}