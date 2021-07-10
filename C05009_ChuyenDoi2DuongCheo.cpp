#include<stdio.h>
main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int h = n-1;
	for(int i = 0; i < n; i++){
		int k = a[i][i];
		a[i][i] = a[i][h];
		a[i][h] = k;
		h--;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}