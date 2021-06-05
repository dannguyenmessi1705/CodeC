#include <stdio.h>
#include <string.h>
int Doi(char s[]){
    int i, k=1;
    for (i=0;i<strlen(s)/2;i++){
        if (s[i] != s[strlen(s)-i-1]){
            k=0;
            break;
        }
    }
    if (k==1) printf("YES");
    else printf("NO");
}
int main(){
    char s[100];
    int t;
    scanf("%d", &t);
    fflush(stdin);
    while(t--){
    gets(s);
    Doi(s);
    printf("\n");
    }
    return 0;
}