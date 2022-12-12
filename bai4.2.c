#include<stdio.h>
int main() {
	// Bai tap nhap 2 so thuc va kiem tra chung co cung dau khong
    float a, b;
    printf("Nhap 2 so thuc a, b");
    scanf("%f%f", &a, &b);
    // Neu a * b > 0 la 2 so cung dau vi (am nhan am = duong va nguoc lai)
    if(a * b > 0){
    	printf("\n%.2f va %.2f cung dau", a, b);
	}else{
		printf("\n%.2f va %.2f khac dau ", a, b);
	}
}
