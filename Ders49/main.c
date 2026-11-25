#include <stdio.h>
#include <stdlib.h>


//klayeden girilen iki tane sayýyý toplayan ve sonucu ekrana yazdýran  fonksiyonu yazan program 

	int toplam(int s1, int s2)
	{
		int s3;
		s3=s1+s2;
		return s3;
	}


	int main() {
	
	int x,y;

	printf("Sayi1: ");
	scanf("%d",&x);
	
	printf("Sayi2: ");
	scanf("%d",&y);
	
	int t;
	t=toplam(x,y);
	
	
	printf("Toplam: %d",t);
	
	
	return 0;
}




/*	int toplam(int s1,int s2)
	{
		int s3;
		s3=(s1+s2)*5-10;
		return s3;
	}


	int main() {
	
	int t;
	t=toplam(4,5);
	printf("%d\n",t);	
	
	t=toplam(2,3);
	printf("%d",t);	
*/
