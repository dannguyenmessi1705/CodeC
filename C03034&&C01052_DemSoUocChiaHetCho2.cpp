#include <stdio.h>
#include <math.h> 
int countDivisors(int n, int k){
    int count = 0, i;
    for (i = 1; i <= sqrt(n); i++){
         if (n % i == 0){
            if (i % k == 0)
                count++;
            if ((n / i) % k == 0)
                count++;
        }
    }
    i--;
    if ((i * i == n) && (i % k == 0))
        count--;
    return count;
}
int main(){
    int n, t, k=2;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", countDivisors(n, k));
    }
    return 0;
}