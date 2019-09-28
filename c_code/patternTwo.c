#include<stdio.h>

int main()
{
	int i ,j ,k ,n;
	n = 10;

	for(i=0;i<=n;i++){
		
		for(j=i;j<=n;j++){
			printf(" *");
		}

		for (j=0;j<=i;j++)
		{
			j==i ?printf(" *"):printf("  ");
		}

		for (j=0;j<=i-1;j++)
		{
			printf("  ");
		}

		for(j=i;j<=n;j++){
			printf(" *");
		}
		printf("\n");
			
	}

	for (i = 0; i <= (n*2)+2; ++i)
	{
		printf(" *");
	}
	printf("\n");

	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			printf(" *");
		}

		for (j=i;j<=n-1;j++)
		{
			printf("  ");
		}

		for (j=i;j<=n;j++)
		{
			j==i?printf(" *"):printf("  ");
		}

		for(j=0;j<=i;j++){
			printf(" *");
		}
		printf("\n");
	}


}