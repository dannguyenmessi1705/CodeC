#include <stdio.h>
int Fibo(int x){
    int a=0;
    if (x==1) return a;
    else if (x==2 || x==3) return 1;
    else{
        int x2,x3,xn;
        x2=1;
        x3=1;
        for(int i=4;i<=x;i++){
            xn=x2+x3;
            x2=x3;
            x3=xn;
        }
        return xn;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d ", Fibo(i));
    }
}