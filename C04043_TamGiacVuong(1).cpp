#include <stdio.h>
#include <math.h>
int main(){
    int n,i,t, check;
    unsigned long long a[5000], x, y, z;
    scanf("%d", &t);
    while(t--){
        check=0;
        scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%llu", &a[i]);
        for(i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        for(i=0;i<n;i++) a[i]=a[i]*a[i];
        for(i=0;i<n;i++){
            if(check==1) break;
            int left=n-2;
            int right=n-1;
            x=a[i];
            while(left>i){
                y=a[left];
                z=a[right];
                long long sub=z-y;
                if(sub==x){ 
                    check=1;
                    break;
                }
                else if(sub>x) right--;
                else left--;
            }
        }
        if(check==1) printf("YES\n");
        else printf("NO\n");
    }
}