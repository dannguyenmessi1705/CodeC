#include <stdio.h>
int sum1 = 0, sum2 = 0, l1, l2;
void SoSanh(int a, int b){
    int tmp1=a, tmp2=b;
    while(tmp1>0){
        l1=tmp1%10;
        sum1+=l1;
        tmp1/=10;
    }
    while(tmp2>0){
        l2=tmp2%10;
        sum2+=l2;
        tmp2/=10;
    }
    if(sum1>sum2) printf("%d %d", b, a);
    if(sum1<sum2) printf("%d %d", a, b);
    if(sum1==sum2) printf("%d %d", a, b);
}
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    SoSanh(a,b);
}