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
int tangdan(long long n){
	if(n<2) return 0;
	else while(n>=10){
		long long donvi=n%10;
		n/=10;
		if(donvi<=n%10){
			return 0;
		}
	}
	return 1;
	
	
	
}
int giamdan (long long n){
	if(n<2) return 0;
	else while(n>=10){
		long long donvi=n%10;
		n/=10;
		if(donvi>=n%10){
			return 0;
		}
	}
	return  1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long b=10;
		long long i;
		for(i=1;i<n;i++){
			b*=10;
		}
		long long a=b/10,dem=0;
		for(i=a;i<=b;i++){
			if((tangdan(i)||giamdan(i))&&nguyento(i)){
				dem++;
			}
			
		}
		printf("%lld\n",dem);
	}
}