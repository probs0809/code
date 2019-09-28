#include <stdio.h>
#include <string.h>

int main(){
	int i ,j ,n;
	int k=0;
	n = 9; 

	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			printf(" %d",(j)%2);
		}

		for(j=i;j<=n-1;j++){
			printf("  ");
		}

		for(j=i;j<=n-2;j++){
			printf("  ");
		}

		for(j=0;j<=i;j++){
			i==n && j==0?printf(""):printf(" %d",(j+i)%2);
		}
		printf("\n");
	}
	return 0;
}