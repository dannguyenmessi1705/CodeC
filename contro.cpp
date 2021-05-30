#include <stdio.h>
int main(){
    int x, f=0, s ;
    int *p;
    scanf("%d", &x);
    printf("%d\n", x);
    p=&x;
    scanf("%d", p);
    printf("%d\n", x);
    p=&s;
    scanf("%d", &f);
    for(int i=0;i<=3;i++)
        s=f+i;
    printf("%d\n", s);
    printf("%d", *p);

}