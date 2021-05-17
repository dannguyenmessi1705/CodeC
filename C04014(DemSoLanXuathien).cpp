#include <stdio.h>
int a[100];
int b[100];
int n;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=1;
    }
}
void Dem(){
    for(int i=0;i<n;i++){
        int count=1;
        if(b[i] ){
            b[i]=0;
            for(int j=i+1;j<n;j++){
            if (a[j]==a[i]){
                 count++;
                 b[j]=0;
        }
    }
    printf("%d %d\n", a[i], count);
}
}
}
int main(){
    Nhap();
    Dem();
}