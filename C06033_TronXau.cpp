#include<stdio.h>
#include<string.h>
main(){
	char s1[200], s2[200], s12[400], s[400];
	while(1){
		int n;
		scanf("%d", &n);
		if(n != 0){
			scanf("%s", s1);
			scanf("%s", s2);
			scanf("%s", s);
			int j = 1, check = 0;
			while(j < 2*n){
				for(int i = 0; i < n; i++){
					s12[2*i] = s2[i];
					s12[2*i+1] = s1[i];
				}
				s12[2*n] = 0;
				if(strcmp(s, s12) == 0){
					check = 1;
					printf("%d\n", j);
					break;
				}
				for(int h = 0; h < n; h++){
					s1[h] = s12[h];
				}
				s1[n] = 0;
				int g = 0;
				for(int h = n; h < 2*n; h++){
					s2[g++] = s12[h];
				}
				s2[n] = 0;
				j++;
			}
			if(check == 0) printf("-1\n");
		}
		else break;
	}
}