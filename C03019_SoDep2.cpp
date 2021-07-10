#include<stdio.h>
int chuso(int n){
	int k=1;
	while(n--){
		k*=10;
		
	}
	return k;
}
int thuannghich(int n){
	int rev=0;
	int tmp=n;
	while(n){
		rev=rev*10+n%10;
		n/=10;
	}
	if(rev==tmp){
		return 1;
	}
	return 0;
}
int tongchuso(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	if(sum%10==0){
		return 1;
}else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int i;
	int dem=0;
	for(i=chuso(n-1);i<chuso(n);i++){
		if(tongchuso(i)&&thuannghich(i)){
			++dem;
		}
	}
	printf("%d\n",dem);
	
}
}