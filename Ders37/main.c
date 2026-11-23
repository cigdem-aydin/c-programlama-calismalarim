#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char kitap[40];
	printf("Ad: ");
	scanf("%s",&kitap);
	
	printf("%s",kitap);
	
	printf("\n");
	
	printf("%18s",kitap);
	
	printf("\n");
	
	printf("%20.5s",kitap);
	
	printf("\n");
	printf("%-20s",kitap);
	
	
	return 0;
}
