#include "stdio.h"
int main () {
	float a, b, tong, hieu;
	char kytu;
	printf ("\n hay nhap so a, b ");
	scanf ("\n%f%f", &a, &b);
	printf ("\nhay nhap ky tu + hoac -");
	scanf ("\n%c", &kytu);
	switch ( kytu ) {
		case 43 : 
				tong= a+b;
				printf ("\ntong cua a va b la = %.2f", tong);
				break;
				
		case 45 :
				hieu= a-b;
				printf ("\nhieu cua a va b la = %.2f", hieu );
				break;
		default :
				printf ("\nvui long nhap + hoac - : ");
			
	}
}
