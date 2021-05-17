#include <stdio.h>
#define MAX_SIZE 100
int Nhap(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
int Xuat(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\t%d", arr[i]);
    }
}
int sumle(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0) sum += arr[i];
    }
    return sum;
}
int sumchan(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    int arr[MAX_SIZE];
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    } while(n <= 0 || n > MAX_SIZE);
    Nhap(arr, n);
    Xuat(arr, n);
    printf("\nTong cac chu so le trong mang = %d", sumle(arr, n));
    printf("\nTong cac chu so chan trong mang = %d", sumchan(arr, n));
}