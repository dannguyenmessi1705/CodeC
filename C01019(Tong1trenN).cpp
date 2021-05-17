#include <stdio.h>
double sum =0;
double Tong(int n){
    int i=1;
    while(i<=n){
        sum+=1.0 / i;
        i++;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%0.4lf", Tong(n));
}