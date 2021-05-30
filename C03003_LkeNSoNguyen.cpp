#include <stdio.h>
#include <math.h>
int Prime(int a){
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}
void LietKe(int n){
    int i=2, dem=0;
    while(dem<n){
        if(Prime(i)==1){
            printf("%d\n", i);
            dem++;
        }
        i++;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    LietKe(n);
}