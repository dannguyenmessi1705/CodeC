#include <stdio.h>
long long Tach(long long n){
    long long tmp=n;
    long long a=0;
    int check=0;
    while(n>0){
        int b=n%10;
        if(b==4 && check==0){
            tmp/=10;
            if(tmp%10==8){
                tmp/=10;
                if(tmp%10==0){
                    check++;
                    tmp/=10;
                }
            }
        }
        if(check==1){
            check++;
            n=tmp;
            b=n%10;
            a=a*10+b;
            n/=10;
            tmp/=10;
        }
        else{
            a=a*10+b;
            tmp=n;
            n/=10;
            tmp/=10;
        }
    }
    return a;
}
void Xuat(long long a){
    while(a>0){
      int b=a%10;
      printf("%d", b);
      a/=10;  
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        long long a=Tach(n);
        Xuat(a);
        printf("\n");
    }
}