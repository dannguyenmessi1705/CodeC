#include <stdio.h>
int main(){
    int a,b,i,j,k,h;
    scanf("%d", &a);
    k=97;
    for(i=1;i<=a;i++){
        if(i%2==1){
            for(j=k;j<k+i;j++){
                printf("%c ", j);
            }
            h=j-1;
            printf("\n");
        }
        else{
            for(j=h+i;j>=h+1;j--){
                b=h+i;
                printf("%c ", j);
            }
            k=b+1;
            printf("\n");
        }
    }
}