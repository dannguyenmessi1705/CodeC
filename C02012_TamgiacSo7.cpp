#include <stdio.h>
int main(){
    int n, dem=1;
    scanf("%d", &n);
    int h, count;
    while(dem<=n){
        h=0;
        count=n-1;
        for(int i=1;i<=dem;i++){
            if(i==1)
                printf("%d ", dem);
            else{
                h=h+count;
                printf("%d ", dem+h);
                count--;
            }
        }
            printf("\n");
            dem++;

}
}