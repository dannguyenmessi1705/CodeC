#include<stdio.h>
void nhap(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
}
void trakq(int a[] , int n){
	for(int i=0 ; i<n-1 ; i++){
		int x = i;
		for(int j = i + 1; j < n ; j++){
			if(a[x] > a[j]){
				x=j;
	    	}
		}
		int doi = a[x];
		a[x] = a[i];
		a[i] = doi;
		int d = 0;
		printf("Buoc %d: ",i+1);
		for(int k = 0 ; k < n ; k++){
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}

main(){
	int a[100], n;
    scanf("%d",&n);
    nhap(a, n);
    trakq(a, n);
}