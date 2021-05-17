#include <stdio.h>
#include <math.h>
int main(){
    float x,y,x1,y1;
    int k;
    scanf("%d", &k);
    while(k--){
    scanf("%f%f%f%f", &x,&y,&x1,&y1);
    int a=abs(x-x1);
    int b=abs(y-y1);
    float d=sqrt(pow(a,2)+pow(b,2));
    printf("%.4f\n", d);
    }
}