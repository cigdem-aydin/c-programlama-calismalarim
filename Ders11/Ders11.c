#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,sayi;
	int faktoryel=1;
	
	printf("Faktoryeli alinacak sayi: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktoryel=faktoryel*i;
	}
	printf("Sonucunuz: %d",faktoryel);
	
	return 0;
}
