#include<stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int dem=0;
	for(int i=1;i<=n;i++){
		int a=i;
		while(a%2==0){
			dem++;
			a/=2;
		}
	}
	if(dem>=k) printf("Yes");
	else printf("No");
}