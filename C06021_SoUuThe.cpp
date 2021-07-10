#include<stdio.h>
#include<string.h>
main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[1000];
		int chan = 0, le = 0, kt = 1;
		scanf("%[^\n]%*c", s);
		int len = strlen(s);
		if(s[0] == '0') printf("INVALID\n");
		else{
			for(int i = 0; i < len; i++){
				if(s[i] < '0' || s[i] > '9'){
					kt = 0;
					printf("INVALID\n");
					break;
				}
			}
			if(kt == 1){
				for(int i = 0; i < len; i++){
					if(s[i]==49 || s[i] == 51 || s[i]==53 || s[i] == 55 || s[i] == 57) le++;
					else chan++;
				}
				if( len % 2 == 0 && chan > le) printf("YES\n");
				else if(len % 2 == 1 && le > chan) printf("YES\n");
				else printf("NO\n");
			}
		}
	}
}