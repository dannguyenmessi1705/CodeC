#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		
	
	long long n,fb1=0,fb2=1,fbn=0;
	scanf("%lld",&n);
	while(fb1+fb2<=n){
		fbn=fb1+fb2;
		fb2=fb1;
		fb1=fbn;
	}
	(fbn==n)?printf("YES\n"):printf("NO\n");
	
}
}