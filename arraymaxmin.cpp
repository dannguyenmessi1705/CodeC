#include <stdio.h>
#define Max_Size 1000
int nhap(int arr[], int n){
    for (int i=0;i<n;i++){
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
int max(int arr[], int n){
    int max = arr[0];
    for (int i=0;i<n;i++){
       if (arr[i] > max) max = arr[i];
    }
    return max;

}
int min(int arr[], int n){
    int min = arr[0];
    for (int i=0;i<n;i++){
       if (arr[i] < min) min = arr[i];
        
    }
    return min;
}
int main(){
    int arr[Max_Size], n;
    printf("Nhap n = ");
    scanf("%d", &n);
    nhap(arr, n);
    printf("\nMax = %d", max(arr, n));
    printf("\nMin = %d", min(arr, n));
}
