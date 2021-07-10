#include<stdio.h>
#include<string.h>
main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s1[200], s2[200], xau1[200][200], xau2[200][200];
		scanf("%[^\n]%*c", s1);
		scanf("%[^\n]%*c", s2);
		int pos1 =0, pos2 = 0;
		for(int i = 0; s1[i] != NULL; i++){
			if(s1[i] == 32){
				xau1[pos1][pos2] = 0;
				pos1 ++; pos2 = 0;
			}
			else{
				xau1[pos1][pos2] = s1[i];
				pos2++;
			}
		}
		xau1[pos1][pos2] = 0;
		int pos3 = 0, pos4 = 0;
		for(int i = 0; s2[i] != NULL; i++){
			if(s2[i] == 32){
				xau2[pos3][pos4] = 0;
				pos3 ++; pos4 = 0;
			}
			else{
				xau2[pos3][pos4] = s2[i];
				pos4++;
			}
		}
		xau2[pos3][pos4] = 0;
			for(int i = 0; i <= pos1; i++){
			for(int j = i + 1; j <= pos1; j++){
				if(xau1[i][0] != 0 && xau1[j][0] != 0){
					if(strcmp(xau1[i], xau1[j]) == 0) xau1[j][0] = 0;
				}
			}
		}
		for(int i = 0; i <= pos3; i++){
			for(int j = 0; j <= pos1; j++){
				if(xau2[i][0] != 0 && xau1[j][0] != 0){
					if(strcmp(xau2[i], xau1[j]) == 0) xau1[j][0] = 0;
				}
			}
		}
		for(int i = 0; i <= pos1; i++){
			for(int j = i + 1; j <= pos1; j++){
				if(xau1[i][0] != 0 && xau1[j][0] != 0 && strcmp(xau1[i], xau1[j]) > 0){
					char k[200];
					strcpy(k, xau1[i]);
					strcpy(xau1[i], xau1[j]);
					strcpy(xau1[j], k);
				}
			}
		}
		for(int i = 0; i <=pos1; i++){
			if(xau1[i][0] != 0) printf("%s ", xau1[i]);
		}
		printf("\n");
	}
}