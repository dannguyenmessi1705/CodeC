#include <stdio.h>
int main(){
    int t,n;
    long a[100000], MIN;
    scanf("%d", &t);
    while(t--){
        int pos, x, count=0;
        long Min=__LONG_MAX__;
        scanf("%d", &n);
        for(int i=0;i<n;i++) scanf("%d", &a[i]);
	    for(int i=1;i<n;i++){
			x=a[i]; 
			pos=i;
			while(pos>0&&x<a[pos-1]){
				a[pos]=a[pos-1];
				pos--;
			}
			a[pos]=x;
		}
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<Min) Min=a[i]-a[i-1];
        }
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]==Min) count++;
        }
        printf("%d %d\n", Min, count);
    }
}