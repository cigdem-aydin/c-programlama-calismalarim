#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	sayi=486;
	int birler,onlar,yuzler;
	
	yuzler=sayi/100;
	printf("%d\n",yuzler);

	onlar=sayi/10;
	onlar=onlar%10; //onlar deðiþkenine iki defa atama yaptýk
	printf("%d\n",onlar);

	birler=sayi%10; //sayinin 10'a bölümünden kalan
	printf("%d",birler);
	
	
	
	
	return 0;
}













	/*int i;
	for(i=1;i<50;i++) //i 1'den baþlasýn 50 olana kadar bir bir artsýn
	{
		if(i%5==0) //% mod alma sembolüdür. i'nin 5'e bölümünden kalan 0'a eþitse
		{
			printf("%d\n",i);
		}
	}*/
