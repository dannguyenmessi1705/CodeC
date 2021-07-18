#include <stdio.h>
#include <math.h>
int ThuanNghich(long long i){
    long tmp=i, sum=0;
    while(tmp>0){
        int l=tmp%10;
        sum=sum*10+l;
        tmp/=10;
    }
    if(sum==i) return 1;
    else return 0;
}
int Chiahet(long long i){
    int sum=0;
    while(i>0){
        int l=i%10;
        sum+=l;
        i/=10;
    }
    if(sum%10==0) return 1;
    else return 0;
}
int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        long long start=pow(10,n-1);
        long long end=pow(10,n);
        int count=0;
        for(long long i=start;i<end;i++){
            if(Chiahet(i)==1 && ThuanNghich(i)==1) count++;
        }
        printf("%d\n", count);
    }
}