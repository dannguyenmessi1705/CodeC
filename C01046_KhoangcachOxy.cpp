#include <stdio.h>
#include <math.h>
int main(){
    double x,y,x1,y1,d;
    int k;
    scanf("%d", &k);
    while(k--){
    scanf("%lf%lf%lf%lf", &x,&y,&x1,&y1);
    d=sqrt(pow((x-x1),2)+pow((y-y1),2));
    printf("%.4lf\n", d);
    }
}