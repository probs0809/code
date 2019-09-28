#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char key[100], plaintext[100], tmp_key[100], enc[100];
    int key_length, text_length;
    printf("\nPlease input Text: ");
    gets(plaintext);
    printf("\nPlease set Key: ");
    gets(key);

    key_length = strlen(key);
    text_length = strlen(plaintext);
    

    int i,j;

    for(i=0,j=0;i<text_length;i++,j++){
        if(j == key_length){
            j = 0;
        }
        tmp_key[i] = key[j];

    }

    for(i=0;i<text_length;i++){
        enc[i] = (((tmp_key[i] + plaintext[i])%26)+'A');
    }
    printf("\n Encrypted text:");
    puts(enc);
    return 0;
}