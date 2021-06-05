#include <stdio.h>
void Phantich(int a){
    int j=0;
    for(int i=2;i<=a;i++){
        if(a%i==0){
            a/=i;
            j++;
            if(i<=a){
                i--;
                continue;
        }
        }
        if(j>0) printf("%d(%d) ", i, j);
        j=0;
    }

}
int main(){
    int a,t;
    scanf("%d", &t);
    for(int j=1;j<=t;j++){
    scanf("%d", &a);
    printf("Test %d: ", j);
    Phantich(a);
    printf("\n");
    }
    }