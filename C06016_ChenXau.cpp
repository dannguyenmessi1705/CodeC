#include<stdio.h>
#include<string.h>
main(){
	char s1[200], s2[100], s3[100];
	int p;
	scanf("%[^\n]%*c", s1);
	scanf("%[^\n]%*c", s2);
	scanf("%d", &p);
	int len1 = strlen(s1), len2 = strlen(s2), e = 0;
	for(int i = p -1; i <len1; i++){
		s3[e] = s1[i];
		e++;
	}
	e=0;
	for(int i = p - 1; i < p-1 + len2; i++){
		s1[i] = s2[e];
		e++;
	}
	e=0;
	for(int i = p - 1 + len2; i < len1 + len2; i++){
		s1[i] = s3[e];
		e++;
	}
	printf("%s", s1);
}