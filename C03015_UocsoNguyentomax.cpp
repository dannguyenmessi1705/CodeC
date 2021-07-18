#include <stdio.h>
#include <math.h>
typedef unsigned long long ng;
ng function(ng n){
	ng maxPrime;
	while(n%2==0){ 
		maxPrime=2;
		n/=2;
	}
	for(ng i=3;i<=sqrt(n);i+=2){
		while(n%i==0)
		n/=i;
		maxPrime=i;
	}
	if(n>1) maxPrime=n;
	return maxPrime;
}
int main(){
	int t;
	ng n;
	scanf("%d", &t);
	while(t--){
		scanf("%llu", &n);
		printf("%llu", function(n));
		printf("\n");
}
return 0;
}