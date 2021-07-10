#include<stdio.h>
#include<string.h>
main(){
	int t, y = 1;
	scanf("%d\n", &t);
	while(t--){
		char s1[200], s3[200], s2[20], xau[20], a1[200][200], a2[200][200];
		scanf("%[^\n]%*c", s1);
		scanf("%[^\n]%*c", s2);
		strcpy(s3, s1);
		strcpy(xau, s2);
		int pos1 =0, pos2 = 0;
		for(int i = 0; s1[i] != NULL; i++){
			if(s1[i] == 32){
				a1[pos1][pos2] = 0;
				pos1 ++; pos2 = 0;
			}
			else{
				a1[pos1][pos2] = s1[i];
				pos2++;
			}
		}
		a1[pos1][pos2] = 0;
		for(int i = 0; i < strlen(s3); i++){
			if(s3[i] >='A' && s3[i] <= 'Z') s3[i] += 32;
		}
		for(int i = 0; i < strlen(xau); i++){
			if(xau[i] >='A' && xau[i] <= 'Z') xau[i] += 32;
		}
		int pos3 =0, pos4 = 0;
		for(int i = 0; s3[i] != NULL; i++){
			if(s3[i] == 32){
				a2[pos3][pos4] = 0;
				pos3 ++; pos4 = 0;
			}
			else{
				a2[pos3][pos4] = s3[i];
				pos4++;
			}
		}
		a2[pos3][pos4] = 0;
		for(int i = 0; i <= pos3; i++){
			if(strcmp(xau, a2[i]) == 0) a1[i][0] = 0;
		}
		printf("Test %d: ", y);
		y++;
		for(int i = 0; i <= pos3; i++){
			if(a1[i][0] != 0) printf("%s ", a1[i]);
		}
		printf("\n");
	}
}