#include<stdio.h>
void nhap(int a[20][20], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i >= j) a[i][j] = j + 1;
			else a[i][j] = 0;
		}
	}
}
void xuly(int a[20][20], int n){
	int b[20][20], c[20][20];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			b[i][j] = a[j][i];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			c[i][j] = 0;
			for(int k = 0; k < n; k++){
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}
main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n, a[20][20];
		scanf("%d", &n);
		nhap(a, n);
		printf("Test %d:\n", i);
		xuly(a,n);
		printf("\n");
	}
}