#include <stdio.h>
#include <math.h>
int Prime(int n){
    if (n<2) return 0;
    for (int i=2; i<sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,k;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n);
        if(Prime(n)==1) printf("YES\n");
        else printf("NO\n");
    }
}