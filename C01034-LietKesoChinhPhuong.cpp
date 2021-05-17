#include <stdio.h>
#include <math.h>
int main(){
    int m,n;
    scanf("%d%d", &m, &n);
    if(m>=0 && m<n){
        int first=sqrt(m);
        int last=sqrt(n);
        if (first*first==m) first=first;
        else first=first+1;
        printf("%d\n", last-first+1);
        for (int i=first;i<=last;i++){
            printf("%d\n", i*i);
        }
    }
    else return 0;
    return 0;
}