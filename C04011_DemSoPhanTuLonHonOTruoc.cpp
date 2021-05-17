#include<stdio.h>
void gt(int a[], int n){
	int s = 0;
	for(int i = 1 ; i < n ; i++){
		int dem=0;
		for(int j = 0 ; j < i ; j++){
			if(a[i] >= a[j]){
				dem++;
			}
		}
		if(dem == i) s++;
	}
	printf("%d\n",s+1);
}
int main(){
	int test;
	scanf("%d\n",&test);
	while(test--){
		int a[50];
		int n;
    	scanf("%d\n", &n);
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
    	gt(a, n);
	}
	return 0;
}