#include<stdio.h>
long long UCLN(long long a, long long b){
	long long x;
 	while(b!= 0){
 		  x=a%b;
		  a=b;
		  b=x;
		}
	return a;
}
long long BC(long long a,long long b)
{
	return (a*b)/UCLN(a,b);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    	long long m;
    	scanf("%lld",&m);
		long long temp=1,i;
        for( i= 1; i<= m; i++){
            temp =BC(temp,i);    
        }
        printf("%lld\n", temp);
	}
	return 0;
}