#include <stdio.h>
#include <math.h>
int Ktra(int i){
    int s=0, t=0;
    int tmp=i;
    while(tmp>0){
        int k=tmp%10;
		if(k==4) return 0;
		t+=k;
        s=s*10+k;
        tmp/=10;
    }
    if (s==i && t%10==0) return 1;
    else return 0;
}
void Xuat(int n){
    int start = pow(10,n-1);
    int end = pow(10,n);
    for(int i=start+1;i<end;i++){
        if(i%10==0) continue;
        if(Ktra(i)==1) printf("%d ", i);
        else continue;
    }
}
int main(){
	int n,t;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		Xuat(n);
		printf("\n");
	}
}