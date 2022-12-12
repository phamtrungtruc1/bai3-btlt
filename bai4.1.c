#include "stdio.h"
int main(){
	// Viet phuong trinh tim so lon nhat va nho nhat trong 3 so thuc a,b,c
	float a, b, c;
	printf(" Nhap 3 so thuc a, b, c ");
	scanf("\n %f%f%f", &a, &b, &c);
	//Tim so lon nhat trong 3 so thuc a,b,c
	// Max = so lon nhat
	if(a>=b && a>=c){
		printf("Max = %f", a);
	}else if(b>=a && b>=c){
		printf("Max = %f", b);
	}else {
		printf("Max = %f", c);
	}
	//Tim so nho nhat trong 3 so thuc a,b,c
	// Min = so nho nhat
	if(a<=b && a<=c){
		printf("\nMin = %f", a);
	}else if(b<=a && b<=c){
		printf("\nMin = %f", b);
	}else {
		printf("\nMin = %f", c);
	}
}
