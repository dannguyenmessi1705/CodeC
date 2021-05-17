#include <stdio.h>
#include <ctype.h>
#include <string.h>
char c[100];
int Alpha(){
    int dem1=0;
    for (int i=0;i<strlen(c);i++){
        if(isalpha(c[i])){
            dem1++;
        }
    }
    return dem1;
}
int Digit(){
    int dem2=0;
    for(int i=0;i<strlen(c);i++){
        if(isdigit(c[i])){
            dem2++;
        }
    }
    return dem2;
}
int Other(){
    int dem3=0;
    for(int i=0;i<strlen(c)-1;i++){
        if(isspace(c[i]) || ispunct(c[i])){
            dem3++;
        }
    }
    return dem3;
}
int main(){
    fgets(c, sizeof c, stdin);
    printf("%d %d %d", Alpha(), Digit(), Other());
}
