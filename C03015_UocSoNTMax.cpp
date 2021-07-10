#include<stdio.h>
#include<math.h>
int nguyento(long long n){
	if(n<2) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
long long uoc(long long n){
	int i;
	long long x;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(nguyento(n/i)) return n/i;
			else if(nguyento(i)) x=i;
		}
	}
	return x;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",uoc(n));
	}
}