#include<stdio.h>
int main(){
	int t;
	int i;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		int dem=0;
		for( i=1;i<=n;i++){
			int a=i;
			while(a%k==0){
				dem++;
				a/=k;
			}
		}
		printf("%d\n",dem);
	}
}