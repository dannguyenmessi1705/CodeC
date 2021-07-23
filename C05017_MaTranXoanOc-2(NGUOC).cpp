#include<stdio.h>
main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int b[100][100], n, m, p = 0;
		scanf("%d%d", &n, &m);
        int len = m*n-1, a[100];
        int tmp=len;
		int  pos2 = m, pos3 = n, pos1 = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &b[i][j]);
			}
		}
		while(p < n*m){
			for(int i = pos1; i < pos2; i++){
				a[len]=b[pos1][i];
                len--;
				p++;
			}
			if(p >= n*m) break;
			for(int i = pos1+1; i < pos3; i++){
				a[len]=b[i][pos2 - 1];
                len--;
				p++;
			}
			if(p >= n*m) break;
			for(int i = pos2 - 2; i >= pos1; i--){
				a[len]=b[pos3-1][i];
                len--;
				p++;
			}
			if(p >= n*m) break;
			for(int i = pos3 -2; i> pos1; i--){
				a[len]=b[i][pos1]; 
				len--;
                p++;
			}
			if(p >= n*m) break;
			pos1++; pos2--; pos3--;
		}
		for(int i=0;i<=tmp;i++){
            printf("%d ", a[i]);
        }
        printf("\n");
	}
}