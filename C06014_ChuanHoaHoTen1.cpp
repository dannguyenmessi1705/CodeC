#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuanhoa(char s[]){
	char *p = strtok(s, " ");
	while(p != NULL){
		p[0] = toupper(p[0]);
		for(int i = 1; i < strlen(p); i++){
			p[i] = tolower(p[i]);
		}
		printf("%s ", p);
		p = strtok(NULL, " ");
	}
	printf("\n");
}
main(){
	int t; char s[100];
	scanf("%d", &t);
	gets(s);
	while(t--){
		gets(s);
		chuanhoa(s);
	}
}