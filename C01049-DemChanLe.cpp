#include <stdio.h>
int main(){
    int n,k;
    scanf("%d", &k);
    while(k--){
        int chan=0, le=0;
        scanf("%d", &n);
        while(n>0){
            int k=n%10;
            n/=10;
            if(k%2==0) chan++;
            else le++;
        }
        printf("%d %d\n", le, chan);
    }
}