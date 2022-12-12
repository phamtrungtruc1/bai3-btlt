#include "stdio.h"
int main(){
	// Bai tap giai va bien luan phuong trinh ax+b=0
	float a, b, x;
	printf("Nhap vao he so cua phuong trinh ax+b=0");
	printf(" Nhap vao he so a, b");
	scanf("%f%f", &a, &b);
	if(a!=0){
		// giai phuong trinh ax+b=0
		x=-b/a; 
		printf("\nphuong trinh co nghiem x = %.2f", x); // Neu a khac 0 phuong trinh co nghiem
	}else if(b==0){
		printf("\nphuong trinh co co so nghiem "); // Neu b = 0 phuong trinh vo so nghiem
	}else{
		printf("phuong trinh vo nghiem"); // Neu a = 0 phuong trinh vo nghiem
	}
}
