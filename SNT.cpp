#include <stdio.h>
#include <math.h>
int KiemTra(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	if(KiemTra(x)==1) printf("YES");
	else printf("NO");
}
