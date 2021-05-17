#include <stdio.h>
int a[30], n, k;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}  
int Dem(){
    int count=0;
    for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                count++;
                continue;
            }
        }
    return count;
}                       
int main(){
    int k;
    scanf("%d", &k);
    while(k--){
        Nhap();
        printf("%d\n", Dem());
    }
}
