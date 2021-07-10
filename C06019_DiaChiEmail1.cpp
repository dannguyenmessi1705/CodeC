#include<stdio.h>
#include<string.h>
main(){
	char hoten[50], tach[50][50];
	scanf("%[^\n]%*c", hoten);
	int len = strlen(hoten);
	for(int i = 0; i <len ; i++){
		if(hoten[i] >='A' && hoten[i] <= 'Z') hoten[i] += 32;
	}
	int pos1 =0, pos2 =0;
	for(int i = 0; hoten[i] != NULL; i++){
		if(hoten[i] == 32){
			tach[pos1][pos2] = 0;
			pos1++; pos2 = 0;
		}
		else{
			tach[pos1][pos2] = hoten[i];
			pos2++;
		}
	}
	tach[pos1][pos2] = 0;
	int e = 0;
	int a[50];
	for(int i = 0; i <= pos1; i++){
		if(tach[i][0] != 0){
			a[e] = i;
			e++;
		}
	}
	for(int i = 0; i< e - 1; i++){
		for(int j = 0; j <= pos1; j++){
			if( a[i] == j) printf("%c", tach[j][0]);
		}
	}
	for(int i = 0; i < strlen(tach[a[e-1]]); i++){
		printf("%c", tach[a[e-1]][i]);
	}
	printf("@ptit.edu.vn");
}