#include<stdio.h>
main(){
	int t;
	scanf("%d", &t);
	for(int test = 1; test <= t; test++){
		int m, n, max = 0, s;
		scanf("%d%d", &m, &n);
		int a[m+2][n+2];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(int i = 0; i < m; i++){
			s = 0;
			for(int j = 0; j < n; j++){
				s += a[i][j];
			}
			if( s > max) max = s;
			a[i][n] = s;
		}
		for(int i = 0; i < m; i++){
			if(a[i][n] == max) a[i][n+1] = 1;
			else a[i][n+1] = 0;
		}
		max = 0;
		for(int i = 0; i < n; i++){
			s = 0;
			for(int j = 0; j < m; j++){
				if(a[j][n+1] == 0) 
					s += a[j][i];
			}
			if(s > max)	max = s;
			a[m][i] = s;
		}
		for(int i = 0; i < n; i++){
			if(a[m][i] == max) a[m+1][i] = 1;
			else a[m+1][i] = 0;
		}
		printf("Test %d:\n", test);
		for(int i = 0; i < m; i++){
			if(a[i][n+1] == 0){
				for(int j = 0; j < n; j++){
					if( a[m+1][j] == 0)
						printf("%d ", a[i][j]);
				}
			printf("\n");
			}
		}
	}
}