#include <stdio.h>
#include <math.h>
#include <string.h>
char n[15], x[15];
int Prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void Nhap(char n[]){
    gets(n);
    for(int i=0;i<strlen(n);i++){
        x[i]=1;
    }
}
int Dem(char n[]){
    int c, count=1;
    for(int i=0;i<strlen(n);i++){
        if(x[i]==1){
            x[i]=0;
            c=(int)n[i]-48;
            if(Prime(c)==1){
                for(int j=i+1;j<strlen(n);j++){
                    if(n[j]==n[i]){
                        count++;
                        x[j]=0;
                    }
                }
                printf("%d %d\n", c, count);
            }
            count=1;
        }
    }
}
int main(){
    Nhap(n);
    Dem(n);
}