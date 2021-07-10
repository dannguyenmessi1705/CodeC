#include<stdio.h>
void nhap(int a[100][100], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void xuly(int a[100][100], int n, int m){
	int b[100][100], i ,j, c[100][100], k;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			b[i][j] = a[j][i];
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			c[i][j] = 0;
			for(k = 0; k < m; k++){
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
		int n, m, a[100][100];
		scanf("%d%d", &n, &m);
		nhap(a,n,m);
		printf("Test %d:\n", i);
		xuly(a,n,m);
		printf("\n");
	}
}