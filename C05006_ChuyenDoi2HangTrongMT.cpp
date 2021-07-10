#include<stdio.h>
main(){
	int m, n , a ,b;
	scanf("%d%d", &m, &n);
	int s[m][n], p[n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &s[i][j]);
		}
	}
	scanf("%d%d", &a, &b);
	for(int i = 0; i < n; i++){
		p[i] = s[a-1][i];
		s[a-1][i] = s[b-1][i];
		s[b-1][i] = p[i];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
}