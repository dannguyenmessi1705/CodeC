#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,t;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &a,&b,&c,&d);
        if(a-c==0 || b-d==0) printf("NO\n");
        else if(abs(a-c)==abs(b-d)) printf("YES\n");
        else printf("NO\n");
    }
}