#include <stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d%d", &a, &b);
    int k=0;
    for(int i=1;i<=a;i++){
        if(i==1){
            for(int j=65+k;j<65+b;j++) printf("%c", j);
            k++;
            printf("\n");
        }
        if(i>=b){
            for(int j=64+b;j>=65;j--) printf("%c", j);
            printf("\n");

        }
        if(i!=1 && i<b){
            for(int j=65+k;j<65+b;j++) printf("%c", j);
            for(int j=64+k;j>=65;j--) printf("%c", j);
            printf("\n");
            k++;
        }
}
}