#include <stdio.h>
#include <string.h>
#include <math.h>
char s[502], x[300];
void Nhap(char s[502]){
    gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++) x[i]=s[i];
}
int Prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int Kiemtra1(char s[502]){
    int len=strlen(s);
    for(int i=0;i<len;i++){
        int n=(int)s[i]-48;
        if(Prime(n)==0) return 0;
    }
    return 1;
}
void Dao(char x[300]){
    int len=strlen(x);
    for(int i=0;i<len;i++){
        char tmp=x[i];
        x[i]=x[len-i-1];
        x[len-i-1]=tmp;
    }
}
int Kiemtra(char s[502]){
    int len=strlen(s);
    Dao(x);
    if(Kiemtra1(s)==1){
        for(int i=0;i<len;i++){
            if(x[i]!=s[len-i-1]) return 0;
        }
        return 1;
    }
    else return 0;
}
int main(){
    int t;
    scanf("%d", &t);
    fflush(stdin);
    while(t--){
    do
        Nhap(s);
    while(strlen(s)==0);
    if(Kiemtra(s)==1) printf("YES\n");
    else printf("NO\n");
}
}