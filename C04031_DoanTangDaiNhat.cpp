#include <stdio.h>
int x[100];
int n;
void nhapMang(int x[100], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("\n");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int timMax(int x[100], int n){
	int max = x[0];
	for(int i=0; i<n; i++){
		if(x[i]>max)
			max = x[i];
	}
	return max;
}
void inMangConKhongGiam(int x[100], int n){
	int b[100], dem;
	for(int i=0; i<n; i++){
		b[i]=1;
	}	
	for(int i=n-1; i>0; i--){
		if(x[i]>x[i-1]){
			b[i-1]=b[i]+1;
		}
    }
	int soLuong = timMax(b, n);
    printf("%d\n", soLuong);
	for(int i=0; i<n; i++){
		if(b[i]==soLuong){
			for(int j=i; j<soLuong+i; j++)
				printf("%d ", x[j]);
            printf("\n");
		}
	}
}
int main(){
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
    scanf("%d", &n);
	nhapMang(x, n);
    printf("Test %d:\n", i);
	inMangConKhongGiam(x, n);
}
}