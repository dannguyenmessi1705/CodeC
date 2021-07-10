#include<stdio.h>
#include<string.h>
main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[1000];
		int b[10] = {0}, kt = 1;
		scanf("%[^\n]%*c", s);
		int len = strlen(s);
		if(s[0] == '0') printf("INVALID\n");
		else{
			for(int i = 0; i < len; i++){
				if(s[i] >= '0' && s[i] <= '9'){
					for(int j = 0; j <= 9; j++){
						if(s[i] - 48 == j){
							b[j]++;
						}
					}
				}
				else{ kt = 0;
					printf("INVALID\n");
					break;
				}
			}
			if(kt == 1){
				int check = 1;
				for(int i = 0; i <= 9; i++){
					if(b[i] == 0){
						check = 0;
						printf("NO\n");
						break;
					}
				}
				if(check == 1) printf("YES\n");
			}
		}
	}
}