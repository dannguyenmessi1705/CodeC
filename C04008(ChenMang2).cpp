#include <stdio.h>
int a[100], b[100], m, n, p, t;
void Nhap(){    
    scanf("%d%d%d", &m, &n, &p);
    for(int i=0;i<m;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &b[i]);
    }
}
void Xuat(){
    for(int i=0;i<n;i++){
        printf("%d ", b[i]);
    }
}
void Chen(){
    for(int i=0;i<p;i++){
        printf("%d ", a[i]);
    }
    Xuat();
    for(int i=p;i<m;i++){
        printf("%d ", a[i]);
    }
}
int main(){
    scanf("%d", &t);
    for(int i=t-t+1;i<=t;i++){
        Nhap();
        printf("Test %d:\n", i);
        Chen();
        printf("\n");
    }

}