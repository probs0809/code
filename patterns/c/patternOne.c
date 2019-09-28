#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i,j;
    char *name;
    name = "hello world\n";
    printf("%s", name);
    for ( i = 0; i < strlen(name); i++)
    {
        name[i] == ' '|| name[i] == 'o'?printf(""):printf("%c",name[i]);
    }
    

}