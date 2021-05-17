#include<stdio.h>
#include<math.h>
int SoCP(int n){
    float s=sqrt(n);
    if (s==(int)s) return 1;
    else return 0;
}
int main(){
    int n;
    float s;
    scanf("%d", &n);
    if (SoCP(n) == 1) printf("1");
    else printf("0");
}