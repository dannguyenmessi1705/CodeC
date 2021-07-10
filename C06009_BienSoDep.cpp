#include<stdio.h>
main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[13];
		scanf("%[^\n]%*c", s);
		if(s[6] == s[7] && s[7] == s[8] && s[10] == s[11]) printf("YES\n");
		else if(s[6] < s[7] && s[7] < s[8] && s[8] < s[10] && s[10] < s[11]) printf("YES\n");
		else if((s[6] == '6' || s[6]=='8') && (s[7] == '6' || s[7]=='8') && (s[8] == '6' || s[8]=='8') && (s[10] == '6' || s[10]=='8') && (s[11] == '6' || s[11]=='8')) printf("YES\n");
		else printf("NO\n");
	}
}