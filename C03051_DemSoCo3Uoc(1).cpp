#include <stdio.h>
#include <math.h>
int Prime(unsigned long n){
    if (n<2)
        return 0;
    for(unsigned long i=2;i<=sqrt(n);i++){
        if (n%i==0)
            return 0;
    }
    return 1;
}
int Dem(unsigned long a, unsigned long b){ 
    int count=0;
    for(unsigned long i=ceil(sqrt(a));i<=sqrt(b);i++){
        if (Prime(i)) count++;
    }
    return count;
}
int main(){
	unsigned long a,b,min,max;
    int i;
    scanf("%d", &i);
    while(i--){
    scanf("%lu%lu", &a, &b);
	printf("%d\n", Dem(a,b));
}
}