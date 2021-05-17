#include <stdio.h>
int main(){
	int a, b;
	int sum = 0;
	printf("Nhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	if (a > b) {
		printf("Nhap sai, vui long nhap lai!");
	    printf("\nNhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	for (int i = a; i <= b; i++){
		if (i % 2 == 0){
			sum += i;
		}
	}}
	printf("Tong cac so chan trong khoang= %d", sum);
} 
