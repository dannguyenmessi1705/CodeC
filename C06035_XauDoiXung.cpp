#include<stdio.h>
#include<string.h>
main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[20];
		scanf("%[^\n]%*c", s);
		int n = strlen(s), dem = 0, j = n - 1;
		for(int i = 0; i < n/2; i++){
			if(s[i] != s[j]) dem++;
			j--;
		}
		if(n % 2 == 0){
			if(dem == 1) printf("YES\n");
			else printf("NO\n");
		}
		else{
			if(dem == 1 || dem == 0) printf("YES\n");
			else printf("NO\n");
		}
	}
}