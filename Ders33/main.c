#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//double --> lf
	
	double sayi,sonuc1,sonuc2;
	
	printf("Degeri Girin: ");
	scanf("%lf",&sayi);
	sonuc1=floor(sayi);
	printf("Sonuc: %.f",sonuc1);
	printf("\n"); 
	sonuc2=ceil(sayi);
	printf("Sonuc: %.f",sonuc2);
	
	
	
	return 0;
}
