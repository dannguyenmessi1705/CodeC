#include <stdio.h>
int UCLN(int a, int b){
    while(a!=0){
        int tmp=a;
        a=b%a;
        b=tmp;
    }
    return b;
}
void LietKe(int a, int b){
    for(int i=a;i<b;i++){
        for(int j=a+1;j<=b;j++){
            if(i<j && UCLN(i,j)==1) printf("(%d,%d)\n", i, j);
        }
    }
}
int main(){
    int a,b;
    do{
    scanf("%d%d", &a, &b);
    }
    while(a<2 || b<2 || a>100 || b>100 || a>b);
    LietKe(a,b);

}