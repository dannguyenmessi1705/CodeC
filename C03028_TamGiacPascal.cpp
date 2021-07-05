#include <stdio.h>
int Giaithua(int n){
    if(n>0) return n*Giaithua(n-1);
    else return 1;
}
void TgPascal(int n){
    int cot=1;
    while(cot<=n){
        for(int i=0;i<n;i++){
            for(int j=0;j<cot;j++) printf("%d ", Giaithua(i)/(Giaithua(j)*Giaithua(i-j)));
            printf("\n");
            cot++;
    }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    TgPascal(n);
}