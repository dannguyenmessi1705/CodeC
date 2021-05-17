#include <stdio.h>
#include <string.h>
bool Doi(char s[]){
    int i, k=1;
    for (i=0;i<strlen(s)/2;i++){
        if (s[i] != s[strlen(s)-i-1]){
            k=0;
            break;
        }
    }
    if (k==1) return true;
    else return false;
}
int main(){
    char s[100];
    FILE *f1;
    FILE *f2;
    f1 = fopen("input.txt", "w");
    f2 = fopen("output.txt", "w");
    fgets(s, 100, f1);
    if (Doi(s)){
        printf("YES");
    }
    else printf("NO");
    return 0;
}