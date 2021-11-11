#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int pow(int x, int y){
    int p=1;
    if(y==0) return 1;
    for(int i=1;i<=y;i++){
        p*=x;
    }
    return p;
}
int main(){
    int n, sum=0, dem=0;
    char bin[100], oct[100];
    do
    scanf("%s", bin);
    while(bin[0]=='0');
    int len=strlen(bin);
    int tmp=len;
    if(tmp%3==1){
        len+=2;
        for(int i=len-1;i>=2;i--){
            bin[i]=bin[i-2];
        }
        bin[0]='0'; bin[1]='0';
    }
    if(tmp%3==2){
        len+=1;
        for(int i=len-1;i>=1;i--){
            bin[i]=bin[i-1];
        }
        bin[0]='0';
    }
    for(int i=0;i<len;i+=3){
        sum=0;
        dem=0;
        int t=0;
        for(int j=i;j<i+3;j++){
            oct[t]=bin[j];
            t++;
        }
        n=atoi(oct);
        while(n>0){
            int l=n%10;
            n/=10;
            sum=sum+l*pow(2,dem);
            dem++;
        }
        printf("%d", sum);
    }
}