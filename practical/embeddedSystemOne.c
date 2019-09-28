#include<stdio.h>

int main(){
    int a=16, b=7;

    printf("\n The value of A & B :%d", a&b);
    printf("\n The value of A | B :%d", a|b);
    printf("\n The value of A ^ B :%d", a^b);
    printf("\n The value of (1's complement B): %ud", ~b);
    printf("\n The value of A>>1 : %d", a>>1);
    printf("\n The value of A>>2 : %d", a>>2);
    printf("\n The value of B<<1 : %d", b<<1);
    printf("\n The value of B<<2 : %d\n", b<<2);

}