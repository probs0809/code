#include<stdio.h>

int main(){
	int i,j,k,n;
	n=10;

	for(i=0;i<=n;i++){
		for(j=i;j<=n;j++){
			printf(" *");
		}

		for(j=0;j<=i-1;j++){
			j==i-1 || i == n?printf(" *"):printf("  ");
		}

		for(j=0;j<=i-2;j++){
			i==n?printf(" *"):printf("  ");
		}

		for(j=i;j<=n;j++){
			i==0 && j==0?printf(""):printf(" *");
		}


		printf("\n");
	}
	for(i=0;i<=n;i++){
		if(i!=0){
			for(j=0;j<=i;j++){
				printf(" *");
			}

			for(j=i;j<=n-1;j++){
				j==n-1?printf(" *"):printf("  ");
			}

			for(j=i;j<=n-2;j++){
				printf("  ");
			}

			for(j=0;j<=i;j++){
				j==0&&i==n?printf(""):printf(" *");
			}
			printf("\n");
		}
		
	}
}