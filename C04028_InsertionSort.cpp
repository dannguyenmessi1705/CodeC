#include<stdio.h>

void printArray(int a[], int n){
	for (int i = 0; i <= n; i++){
		printf("%d ", a[i]);
	}
    printf("\n");
}
void insertionSort(int a[], int n){
	int index, value, count=0;
	for (int i = 0; i < n; i++){
        printf("Buoc %d: ",i); printArray(a,count);
		index = i+1;
		value = a[i+1];
		while (index >= 0 && a[index - 1] > value){
			a[index] = a[index - 1];
			index --;
		}
		a[index] = value;
        count++;
	}
} 
int a[100001];
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	insertionSort(a, n);
	
	return 0;
}