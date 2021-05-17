#include <stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    for (i=1; i <= n; i++){
        char c;
        scanf("\n%c", &c);
        if (c >= 65 && c <= 90){
            printf("%c\n", c + 32);
        }
        if (c >= 97 && c <= 122){
            printf("%c\n", c - 32);
        }
    }
    
}