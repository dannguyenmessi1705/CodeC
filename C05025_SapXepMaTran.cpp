#include<stdio.h>
main(){
	int t;
	scanf("%d", &t);
	for(int d = 1; d <= t; d++){
		int n, m, a[50][50];
		scanf("%d%d", &n, &m);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(int i =0; i < n; i++){
			for(int j = 0; j < m; j++){
				for( int k = i; k < n; k++){
					for( int h = j; h < m; h++){
						if(a[i][j] > a[k][h]){
							int f = a[i][j];
							a[i][j] = a[k][h];
							a[k][h] = f;
						}
					}
				}
			}
		}
		printf("Test %d:\n", d);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}