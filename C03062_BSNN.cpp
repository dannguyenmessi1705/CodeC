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
    	long long n, m,i;
    	scanf("%lld%lld", &n, &m);
    	if(m<n){
    		long long p= n;
    		n= m;
    		m= p;
		}
		long long temp=n;
        for( i= n; i<= m; i++){
            temp =BC(temp,i);    
        }
        printf("%lld\n", temp);
	}
	return 0;
}