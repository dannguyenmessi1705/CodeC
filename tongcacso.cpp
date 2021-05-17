#include <stdio.h>
int main(){
    int n, i;
    int k=0;
    scanf("%d", &n);
    while (n>0){
        i = n % 10;
         k = k+i;
        n /= 10;
    }
    printf("%d", k);

    
        
    }
    

