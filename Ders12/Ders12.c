#include <stdio.h>
#include <stdlib.h>

// fibonacci serisinin ilk 10 elemanýný listeleyen kodu yazýn.

int main() {
	
	int a,b,c,d,i;
	a=1;
	b=1;
	c=1;
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
	for(i=1;i<=10;i++)
	{
		d=a+b+c;
		a=b; //a'nýn yeni deðeri b
		b=c; //b'nin yeni deðeri c
		c=d; //c'nin yeni deðeri d
		printf("%d\n",d);
	}
	
	
	return 0;
}
