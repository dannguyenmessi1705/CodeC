#include <stdio.h>
int main(){
    int a, i, k;
    int j=1;
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        if(i==a){
            for(int k=1;k<=a;k++) printf("*");
        }
        if(i!=a){
            for(int k=1;k<=j;k++){
                if(k==1 || k==j) printf("*");
                else printf(".");
        }
        }
        ++j;
        printf("\n");
    }
}