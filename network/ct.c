#include<stdio.h>
#include<string.h>

int main(){
    char string[100],revstring[100];
    strcpy(string, "HELLO WORLD!");

    int l = 0, m = strlen(string)-1;

    for(int i = m, l = 0; i>=0; i--, l++){
         revstring[l] = string[i];
    }

    printf("%s", revstring);

    

    return 0;
}