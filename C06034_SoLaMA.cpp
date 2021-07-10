#include<stdio.h>
#include<string.h>
main(){
	int a[100] = {0};
	a[73] = 1; a[86] = 5; a[88] = 10; a[76] = 50; a[67] = 100; a[68] = 500; a[77] = 1000;
	int t;
	scanf("%d\n", &t);
	while( t--){
		char s[100];
		gets(s);
		int n = a[s[strlen(s) - 1]];
		for( int i = strlen(s) - 1; i > 0; i--){
			if(a[s[i-1]] >= a[s[i]]) n = n + a[s[i-1]];
			else n = n - a[s[i-1]];
		}
		printf("%d\n", n);
	}
}