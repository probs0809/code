#include<stdio.h>

int main(){
	char text[100];
	printf("Please input the text: \n");
	gets(text);
	int len = strlen(text);
	for(int i=0;i<=len;i++){
		text[i]!=text[i-1] || i==0?printf("%c",text[i]):printf("");
	}
	printf("\n");
	return 0;
}