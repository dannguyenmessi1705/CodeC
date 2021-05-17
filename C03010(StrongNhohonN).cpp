#include <stdio.h>
int Str(int c){
    if (c==0 || c==1){
        return 1; 
    }
    return c*Str(c-1);
}
int Kt(int n){
    int c;
    for (int i=1;i<=n;i++){
        int h=i;
        int k=0; 
        while(h>0){
            c=h%10;
            k=k+Str(c);
            h/=10;
        }
        if (k==i){
            printf("%d ", i);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    Kt(n);
}
