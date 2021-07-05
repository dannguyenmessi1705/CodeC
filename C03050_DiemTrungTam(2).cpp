#include <stdio.h>
char x[10000], y[100000];
int Check(int a, int b, int n){
    int count=1, count1=1;
        for(int i=2;i<n;i++){
            if(x[1]==x[i] || x[1]==y[i]) count++;
            if(y[1]==x[i] || y[1]==y[i]) count1++;
        }
    if(count==n-1 || count1==n-1) return 1;
    else return 0;
}
int main(){
    int n, a, b;
    do scanf("%d", &n);
    while(n<=1);
    for(int i=1;i<n;i++){
        scanf("%d %d", &a, &b); 
        x[i]=a;
        y[i]=b;
    }
    if(Check(a,b,n)==1) printf("Yes");
    else printf("No");
}