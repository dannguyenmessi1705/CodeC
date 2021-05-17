#include <stdio.h>
void in(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void out(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
}
void BubbleSort(int a[], int n){
    int tmp, count;
    for(int i=0;i<n-1;i++){
            count=0;
        for(int j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                count++;
            }
        }
        if (count > 0){
         printf("Buoc %d: ", i+1);
         out(a,n);
        }
    }

}
int main(){
    int a[100], n;
    scanf("%d", &n);
    in(a,n);
    BubbleSort(a,n);
}