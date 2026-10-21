#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,j,k,l;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=1;k<=5;k++)
	{
		for(l=5;l>=k;l--)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}

/*
	//KELEBEK KANADI OLUÞTURMA


	int i,j;
	// üst kanatlarý yazalým.
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	//boþluk oluþturmamýz lazým.
		for(j=1;j<=10-2*i;j++)
		{
			printf(" ");
		}
	//sað tarafý yazalým.
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	//alt kanatlarý yazalým.
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	//boþluk oluþturmamýz lazým.
		for(j=1;j<=10-2*i;j++)
		{
			printf(" ");
		}
	//sað tarafý yazalým.
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}

*/
