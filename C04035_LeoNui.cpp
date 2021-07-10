#include <stdio.h>
int Min(int a[50000], int n){
	int min=150000;
	for(int i=0;i<n;i++){
		if(a[i]<min) min=a[i];
	}
	return min;
	
}
int main(){
	int n, up[50000], down[50000], sumup=0, sumdown=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d%d", &up[i], &down[i]);
		sumup+=up[i];
		sumdown+=down[i];
	}
	if(sumup>sumdown) printf("%d", sumup+Min(down,n));
	else printf("%d", sumdown+Min(up,n));
}