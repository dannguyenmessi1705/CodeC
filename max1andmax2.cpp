#include <stdio.h>
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]); 
        
    }
}
void Find(int a[], int n){
    int firstmax, secondmax, tmp;
    if (a[0]>a[1]){
        firstmax=a[0];
        secondmax=a[1];
    }
    else{
        firstmax=a[1];
        secondmax=a[0];
    }
    for(int i=2;i<n;i++){
        if(a[i]>=firstmax){
             secondmax=firstmax;
             firstmax=a[i];
        }
        else if(a[i]>secondmax){
            secondmax=a[i];
        }
    }
    printf("%d ", firstmax);
    printf("%d", secondmax);
}
int main(){
    int a[100], n;
    do{
        scanf("%d", &n);
    }
    while(n<2 || n>100);
    Nhap(a,n);
    Find(a,n);
}
