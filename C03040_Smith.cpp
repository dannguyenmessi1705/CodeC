#include <stdio.h>
int Tong1(int n){
    int sum=0;
    while(n>0){
        int tmp=n%10;
        sum+=tmp;
        n/=10;
    }
    return sum;
}
int Tong2(int n){
    int sum=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            sum+=Tong1(i);
            n/=i;
            if(i<=n) i--;
        }
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    if(Tong1(n)==Tong2(n)) printf("YES");
    else printf("NO");
}