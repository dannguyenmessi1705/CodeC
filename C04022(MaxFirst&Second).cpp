#include<stdio.h>
void import(int a[],int n){
    for(int i=0;i<n;i++){ 
        scanf("%d",&a[i]); 
        } 
} void firstMax(int a[],int n){ 
    int max1=0; 
    int max2=0; 
    for(int i=0;i<n;i++){ 
        if(max1<a[i]){ 
            max1=a[i]; 
            } 
            } 
    for(int i=0;i<n;i++){ 
        if(max2<a[i]&&a[i]!=max1) 
        max2=a[i]; } 
        printf("%d %d",max1,max2); 
                }
int main(){
    int n,a[100]; 
    scanf("%d",&n); 
    for(int i=0;i<n;i++){ 
        scanf("%d",&a[i]);
         } 
         firstMax(a,n); 
         }