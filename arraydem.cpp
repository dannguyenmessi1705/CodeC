#include <stdio.h>
int swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    int cnt = 1;
    for(int i = 1; i < n;i++){
        if(a[i] == a[i-1]) ++cnt;
        else{
            printf("\n%d %d", a[i-1], cnt);
            cnt = 1;
        }
    }
            printf("\n%d %d", a[n-1], cnt);
}
 