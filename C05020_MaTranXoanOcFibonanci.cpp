#include<stdio.h>
main(){
	int n;
	scanf("%d", &n);
	int s[n][n];
	int pos1 = 0, pos2 = n -1;
	int a = 0, b = 1, c;
	while(pos2>=pos1){
		for(int i = pos1; i < pos2; i++){
			s[pos1][i] = a;
			c =  a + b;
			a = b;
			b = c;
		}
		for(int i = pos1; i < pos2; i++){
			s[i][pos2] = a;
			c =  a + b;
			a = b;
			b = c;
		}
		pos1++;
		for(int i = pos2; i >= pos1; i--){
			s[pos2][i] = a;
			c =  a + b;
			a = b;
			b = c;
		}
		for(int i = pos2; i >= pos1; i--){
			s[i][pos1-1] = a;
			c =  a + b;
			a = b;
			b = c;
		}
		pos2--;
	}
	if(n % 2 != 0){
		s[n/2][n/2] = a;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
}