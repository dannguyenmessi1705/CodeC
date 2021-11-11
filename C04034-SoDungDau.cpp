#include stdio.h
void Nhap(int a[], int n){
    for(int i=0;in;i++){
        scanf(%d, &a[i]);
    }
}
void SDD(int a[], int n){
    for(int i=0;in-1;i++){
        for(int j=i+1;jn;j++){
            if(a[i]a[j]){
                if(j==n-1){
                    printf(%d , a[i]);
                    break;
                }
                continue;
            }
            else break;
        }
    }
    printf(%d, a[n-1]);
}
int main(){
    int n, a[1000];
    int t;
    scanf(%d, &t);
    while(t--){
    scanf(%d, &n);
    Nhap(a,n);
    SDD(a,n);
    printf(n);
    }
}