#include <stdio.h>
#include <stdlib.h>

int main(){
 int c;
 FILE *fpin, *fpout;
 fpin = fopen("input.txt", "r");
 fpout = fopen("output.txt","w");

 while((c=fgetc(fpin)) != EOF){
	fputc(c, fpout);
 }

 fclose(fpin);
 fclose(fpout);
}
