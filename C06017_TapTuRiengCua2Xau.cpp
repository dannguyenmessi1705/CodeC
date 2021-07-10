#include<stdio.h>
#include<string.h>
main(){
	char s1[100], s2[100], a[100][100], b[100][100];
	scanf("%[^\n]%*c", s1);
	scanf("%[^\n]%*c", s2);
	int pos1 = 0, pos2 = 0, pos3 = 0, pos4 = 0;
	for(int i = 0; s1[i] != NULL; i++){
		if(s1[i] == ' '){
			a[pos1][pos2] = 0;
			pos1++; pos2 = 0;
		}
		else{
			a[pos1][pos2] = s1[i];
			pos2++;
		}
	}
	a[pos1][pos2] = 0;
	for(int i = 0; s2[i] != NULL; i++){
		if(s2[i] == ' '){
			b[pos3][pos4] = 0;
			pos3++; pos4 = 0;
		}
		else{
			b[pos3][pos4] = s2[i];
			pos4++;
		}
	}
	b[pos3][pos4] = 0;
	for(int i = 0; i <= pos1; i++){
		for(int j = 0; j <= pos3; j++){
			if(strcmp(a[i], b[j]) == 0) a[i][0] = 0;
		}
	}
	char k[100];
	for(int i = 0; i <= pos1; i++){
		for(int j = i+1; j <= pos1; j++){
			if(strcmp(a[i], a[j]) > 0){
				strcpy(k, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], k);
			}
		}
	}
	for(int i = 0; i <= pos1; i++){
		for(int j = i + 1; j <= pos1; j++){
			if(strcmp(a[i], a[j]) == 0) a[i][0] = 0;
		}
	}
	for(int j = 0 ; j<= pos1; j++){
		if( a[j][0] != 0) printf("%s ", a[j]);
	}
	
}