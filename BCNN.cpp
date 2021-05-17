#include<stdio.h>
#include <algorithm>
int main(){
    int a = 4, b = 5, lcm;
    int maxV = a*b;
    for(int i = std::max(a, b); i <= maxV; i++){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    printf("BCNN(%d, %d) = %d", a, b, lcm);
}
