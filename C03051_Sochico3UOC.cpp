#include <stdio.h>
#include <math.h> 
int songuyento(long long int n){ 
    if(n<2) 
        return 0; 
    for(int i=2;i<=sqrt(n);i++){ 
    if(n%i==0) 
        return 0; 
} 
    return 1; 
} 
int main(){ 
    int n; scanf("%i",&n); 
    for(int i=0; i<n; i++){ 
    long long int l,r; 
    scanf("%lli %lli",&l, &r); 
    l=(long long int)ceil(sqrt(l)); 
    r=sqrt(r); 
    int dem=0; 
    for(long int j=l; j<=r; j+=2){ 
    if(songuyento(j)){ 
    dem++; 
} 
} 
    printf("%i\n",dem+1); 
} 
return 0; 
}