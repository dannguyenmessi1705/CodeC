#include <stdio.h>
int main()
{ int a, n;
scanf("%d", &a);
while(a--){
    scanf("%d", &n);
    printf("%ld\n", (long)n*(n+1)/2);
    }}