#include <stdio.h>
int Max(int *x, int *y, int *z, int *t){
    int max=*x;
    if(*y>=max) max=*y;
    if(*z>=max) max=*z;
    if(*t>=max) max=*t;
    return max; 
}
float Min(int *x, int *y, int *z, int *t){
    int min=*x;
    if(*y<=min) min=*y;
    if(*z<=min) min=*z;
    if(*t<=min) min=*t;
    return min; 
}
int main(){
    int a,b,x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d%d%d%d\n", &x1, &y1, &x2, &y2);
    scanf("%d%d%d%d", &x3, &y3, &x4, &y4);
    int maxx, maxy, minx, miny;
    maxx=Max(&x1,&x2,&x3,&x4);
    maxy=Max(&y1,&y2,&y3,&y4);
    minx=Min(&x1,&x2,&x3,&x4);
    miny=Min(&y1,&y2,&y3,&y4);
    a=maxx-minx;
    b=maxy-miny;
    if(a>b) printf("%d", a*a);
    else printf("%d", b*b);
}