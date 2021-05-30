#include <stdio.h>
int KiemTra(int a){
    int tmp=a, sum=0, k;
    while (tmp>0){
        k=tmp%10;
        sum+=k;
        tmp/=10;
    }
    if(sum%10==0) return 1;
    return 0;
}
int main(){
    int a, n;
    scanf("%d", &n);
    while (n--){
        scanf("%d", &a);
        if(KiemTra(a)==1) printf("YES\n");
        else printf("NO\n");
    }
    
}