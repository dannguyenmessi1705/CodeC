#include <stdio.h>
int Tamgiac(int a, int b, int c){
    if (a+b>c && a+c>b && b+c>a)
        return 1;
    return 0;
}
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (Tamgiac(a,b,c)==1)
        printf("1");
    else printf("0");

}