#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
char s[20], z[20], x[20];
int Prime(long long n){
    if(n<2) return 0;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void Nhap(char s[20]){
    gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        z[i]=1;
    }
}
void Ktra(char s[20]){
    int len=strlen(s);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(s[j]==s[i]) z[j]=0;
    }
}
}
void Dem(char s[20]){
    int len=strlen(s);
    int count=1;
    Ktra(s);
    for(int i=0;i<len;i++){
        if(z[i]==1){
            int n=(int)s[i]-48;
            if(Prime(n)==1){
                for(int j=i+1;j<len;j++){
                    if(s[j]==s[i]) count++;
                }
                printf("%d %d\n", n, count);
            }
        }
        count=1;
    }
}
int main(){
    Nhap(s);
    Dem(s);
}