#include <stdio.h>
int main(){
    int t,n,p,dem;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &p);
        dem=0;
        for(int i=1;i<=n;i++){
            int tmp=i;
            while(tmp%p==0){
                dem++;
                tmp/=p;
            }
        }
        printf("%d\n", dem);
    }
}