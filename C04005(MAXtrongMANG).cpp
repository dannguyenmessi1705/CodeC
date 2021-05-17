#include <stdio.h>
int a[100];
int n, k, max;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
int Max(){
    max=0;
    for(int i=0;i<n;i++){
        if(max<a[i]) max = a[i];
    }  
    printf("%d\n", max); 
    return max;
    
}
void Look(){
    Nhap();
    int b = Max();
    for (int i=0;i<n;i++){
        if (a[i]==b) printf("%d ", i);
    }

}
int main(){
    scanf("%d", &k);
    while(k--){
        Look();
        printf("\n");
}
}