#include<stdio.h>
#include<string.h>
main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        char s[100][100], x[100];
        scanf("%d", &n);
        for(int i = 0 ; i < n; i++){
            scanf("%s", x);
            strcpy(s[i], x);
        }
        for(int i = 0; i < n; i++){
			for( int j = i+1; j < n; j++){
				char c[500], d[500];
				strcpy( c, s[i]); strcpy( d, s[j]);
				strcat( c, s[j]); strcat( d, s[i]);				
				if( strcmp(c,d) > 0){
					char z[150];
					strcpy( z, s[i]);
					strcpy( s[i], s[j]);
					strcpy( s[j], z);
				}
			}
        }
        for(int i = 0; i < n; i++){
            printf("%s", s[i]);
        }   
        printf("\n");
    }
}