#include <stdio.h>
#include<math.h>
int NgTo1(int n){
	if(n<2){
		return 0;
	}else if(n>2){
		if(n%2==0){
			return 0;
		}
	}
	if(n==2) {
		return 1;
	}
	for(int i=3;i<=sqrt(n);i=i+2){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int NgTo(int n){
	int Sum=0;
	while(n!=0){
		int P=n%10;
		if((P!=2)&&(P!=3)&&(P!=5)&&(P!=7)){
			return 0;
		}
		Sum+=P;
		n/=10;
	}
	if(NgTo1(Sum)==1){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,d=0;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			if((NgTo(i)==1)&&(NgTo1(i)==1)){
				++d;
			}
		}
		printf("%d\n",d);
	}
}