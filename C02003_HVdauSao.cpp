#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        if(i==0 || i==a-1){
            for(int j=0;j<a;j++) printf("*");
            printf("\n");
    }
        else{
            for(int j=0;j<a;j++){
                if(j==0 || j==a-1) printf("*");
                else printf(".");
            }
            printf("\n");
        }
    }
}