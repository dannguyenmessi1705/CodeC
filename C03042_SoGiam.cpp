#include <stdio.h>
int Kt(int i){
    int l=i%10;
    i/=10;
    while(i>0){
        int l1=i%10;
        if(l1<=l) return 0;
        l=l1;
        i/=10;
    }
    return 1;
}
int dem(int a, int b){
    int count=0;
    for(int i=a;i<=b;i++){
        if(Kt(i)==1) count++;
    }
    return count;
}
int main(){
    int t,a,b;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &a, &b);
        printf("%d\n", dem(a,b));
    }
}