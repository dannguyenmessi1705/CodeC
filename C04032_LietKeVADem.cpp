#include <stdio.h>
void swap(int *x, int*y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int Check(int n){
    int l=n%10;
    n/=10;
    while(n>0){
        if(n%10>l) return 0;
        l=n%10;
        n/=10;
    }
    return 1;
}
void Tim(int a[], int b[], int l){
    for(int i=0;i<l;i++){
        int x=1;
        for(int j=i+1;j<l;j++){
            if(a[i]==a[j]){
                ++x;
                b[j]=0;
            }
        }
        if(b[i]!=0) b[i]=x;
    }
}
void Sapxep(int a[], int b[], int l){
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(b[i]!=0 && b[j]!=0 && b[i]<b[j]){
                swap(&b[i], &b[j]);
                swap(&a[i], &a[j]);
            }
        }
    }
}
int main(){
    int n, l=0, a[1000], b[1000];
    while(scanf("%d", &n)!=EOF){
        if(Check(n)==1){
            a[l]=n;
            b[l]=-1;
            l++;
        }
    }
        Tim(a,b,l);
        Sapxep(a,b,l);
        for(int i=0;i<l;i++){
            if(b[i]!=0) printf("%d %d\n", a[i], b[i]);
        }
}
