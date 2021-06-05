#include <stdio.h>
#include <string.h>
void Xoa(char s[]){
    if(s[strlen(s)-1]=='\n')
    s[strlen(s)-1]='\0';
}
int main(){
    char s[100];
    fgets(s,sizeof s,stdin);
    Xoa(s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]==' ' && s[i+1]!=' ') s[i]='\n';
    }
    printf("%s", s);
}