#include <stdio.h>
int UCLN(int x, int y){
    if(x<=0 || y<=0) return 0;
    while(x!=0){
        int tmp=x;
        x=y%x;
        y=tmp;
    }
    return y;
}
int main(){
    int t,a,b,c,d;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(UCLN(a,b)==UCLN(c,d)) printf("YES\n");
        else printf("NO\n");
    }
}