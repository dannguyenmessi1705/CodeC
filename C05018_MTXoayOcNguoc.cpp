#include<stdio.h>
void in(int a[20][20], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void xoanocnguoc(int a[20][20], int n){
	int d = n * n, b= 0;
	while(b <= n/2){
		for(int i = b; i < n - b; i++) a[b][i] = d--;
		for(int i = b + 1; i < n - b; i++) a[i][n-b-1] = d--;
		for(int i = n - b- 2; i >= b; i--) a[n-b-1][i] = d--;
		for(int i = n - b -2; i> b; i--) a[i][b] = d--;
		b++;
	}
	in(a,n);
}
main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n, a[20][20];
		scanf("%d", &n);
		printf("Test %d:\n", i);
		xoanocnguoc(a,n);
	}
}