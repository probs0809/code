#include<stdio.h>
 
#define forp(i)	for(int j = 0; j <= i; j++){ (j%2)==(1)?printf(" *"):printf("  "); }
#define foru(n,i)	for(int j = n; j >= i; j--){ (j%2)==(1)?printf(" *"):printf("  "); }

int main(){

int n = 20;
	for(int i = 0; i <= n; i++){ 
		foru(n,i+1);
		forp(i-1);
		forp(i);
		foru(n,i+1);
		printf("\n");
	}
	for(int i = 0; i <= n; i++){ 
		forp(i);
		foru(n,i+2);
		foru(n,i+1);
		forp(i);
		printf("\n");
	}
	
	
}