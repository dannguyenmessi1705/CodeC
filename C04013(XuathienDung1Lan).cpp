#include<stdio.h>
int a[100];
int b[100];
int c[100];
int n;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=1;
        c[i]=1;
    }
}
void Dem(){
    int dem=0;
    for(int i=0;i<n;i++){
        int count = 1;
        if(b[i]){
            b[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]==a[i]){
                    count++;
                    b[j]=0;
                }
            }
            if (count==1) dem++;
        }
    }
    printf("%d\n", dem);
}
void Lke(){
    for(int i=0;i<n;i++){
        int count = 1;
        if(c[i]){
            c[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]==a[i]){
                    count++;
                    c[j]=0;
                }
            }
            if(count==1){
                printf("%d ", a[i]);
            }
        }
    }
}
int main(){
    Nhap();
    Dem();
    Lke();
}
