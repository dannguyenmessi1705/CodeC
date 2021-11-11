#include <stdio.h>
#include <math.h>
int Dem(int N){
    int count=0;
    while(N>0){
        count++;
        N/=10;
    }
    return count;
}
int ArmStrong(int N){
    int tmp=N;
    int bac=Dem(N);
    int sum=0;
    while(N>0){
        int n=N%10;
        sum+=pow(n,bac);
        N/=10;
    }
    if(sum==tmp) return 1;
    else return 0;
}
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        if(ArmStrong(i)==1) printf("%d ", i);
    }

}