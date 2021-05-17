#include <stdio.h> 
int main(){
    int n, i;
    int k=1;
    scanf("%d", &n);
    while(n>0){
        i = n % 10;
        k = i * k;
        n /= 10;

    }
    printf("%d", k);

}