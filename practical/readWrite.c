#include<stdio.h>
#include<unistd.h>

int main(){
    system("clear");
    int c;
    FILE *fpin,*fout;
    fpin = fopen("setToZero.c", "r");
    fout = fopen("output.c", "w");
    system("gcc -o output output.c");
    system("clear");
    usleep(199900);
    system("./output 20");
    while((c=fgetc(fpin))!=EOF){
        fputc(c,fout);
        
    }
    
   fclose(fpin);
   fclose(fout);
}