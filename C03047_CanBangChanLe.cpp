#include <stdio.h>
#include <math.h>
int n;
int Ktra(int i){
    int chan=0, le=0;
    while(i>0){
        int k=i%10;
		if(k%2==0) chan++;
        else le++;
        if(chan>(n/2) || le>(n/2)) return 0;
        i/=10;
    }
    return 1;
}
void Xuat(int n){
    int dem=0;
    int start = pow(10,n-1);
    int end = pow(10,n);
    for(int i=start;i<end;i++){
        if(Ktra(i)==1){
            dem++; 
            printf("%d ", i);
            if(dem==10){
                dem=0;
                printf("\n");
            }
        }
        else continue;
    }
}
int main(){
	do{
		scanf("%d", &n);
    }
    while(n%2==1);
		Xuat(n);
	}