#include<stdio.h>
main(){
	int m, n , a ,b;
	scanf("%d%d", &m, &n);
	int s[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &s[i][j]);
		}
	}
	scanf("%d%d", &a, &b);
	a--;
	b--;
	for(int i = 0; i < m; i++){
		int k = s[i][a];
		s[i][a] = s[i][b];
		s[i][b] = k;
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
}