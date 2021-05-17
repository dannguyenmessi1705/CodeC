#include <stdio.h>
int Str(int c){
    if (c==0 || c==1){
        return 1; 
    }
    return c*Str(c-1);
}
int main(){
    int c;
    int a,b;
    scanf("%d%d", &a, &b);
    if (a<b){
    for (int i=a;i<=b;i++){
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
    else {
        for (int i=b;i<=a;i++){
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
    }
