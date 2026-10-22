#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,j,boy;
	printf("Boy Degeri: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=boy-i;j++) //neden boy-i?
		{
			printf(" ");
		}

		for(j=1;j<=2*i-1;j++) //neden 2*i-1?
		{
			printf("*");
		}
		printf("\n");
	}

	
	return 0;
}

/*

	int en,boy,i,j;
	printf("En Degeri: ");
	scanf("%d",&en);
	printf("Boy Degeri: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
*/


/*

	int i,j,taban;
	printf("Taban Degeri: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=taban-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
*/
