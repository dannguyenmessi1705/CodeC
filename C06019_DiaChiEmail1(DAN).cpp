#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%[^\n]%*c", s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>=65 &&s[i]<=90) s[i]+=32;
    }
    printf("%c", s[0]);
    int d=0, n=0;
    for(int i=len-1;s[i]!=32;i--){
        ++n;
    }
    for(int i=0;i<len-n-2;i++){
        if(s[i]==32 && s[i+1]!=32) printf("%c", s[i+1]);
    }
    for(int i=len-n;i<len;i++) printf("%c", s[i]);
    printf("@ptit.edu.vn");
    
}