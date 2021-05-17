#include <stdio.h>
#include <stdbool.h>
bool Prime(int n){
    if (n<2){
        return false;
    }
    for (int i=2;i*i<=n;i++){
        if(n%i==0) return false;
        }
    return true;
}
void Dep(int a, int b){
    bool test;
    int min,max;
    int s,tmp1,count=0,tmp,f[100];
    a>b?(max=a,min=b):(min=a,max=b);
    f[0]=0, f[1]=1;
    for(int i=2;i<100;i++){
        f[i]=f[i-2]+f[i-1];
    }
    for(int i=min;i<=max;i++){
        if (Prime(i)==false) continue;
        test=false;
        s=0;
        tmp=i;
        while(tmp!=0){
            tmp1=tmp%10;
            s+=tmp1;
            tmp/=10;
        }
        for(int k=0;k<100;k++){
            if (s==f[k]){
                test=true;
                break;
            }
        }
        if (test==true){
            printf("%d ", i);
    }
}
}
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    Dep(a,b);
}