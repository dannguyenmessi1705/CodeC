#include<stdio.h>
#include<math.h>
main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	//nhap ma tran
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int s = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(a[i][j] == 2 || a[i][j] == 3){
				s += a[i][j];
			}
			else if(a[i][j] > 3){
				int check = 1;
				for(int g = 2; g <= sqrt(a[i][j]); g++){
					if( a[i][j] % g == 0){
						check = 0;
						break;
					}
				}
				if(check == 1) s+= a[i][j];
			}
		}
	}
	printf("%d", s);
}