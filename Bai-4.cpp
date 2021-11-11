#include <stdio.h>
int a[200], b[200], tmp1[200], tmp2[200], tmp3[200], tmp4[200], m, n;
void Nhap(){
    for(int i=0;i<m;i++){
        scanf("%d", &a[i]);
        tmp1[i]=1;
    }
    for(int i=0;i<n;i++){
        scanf("%d", &b[i]);
        tmp2[i]=1;
    }
}
int Dem1(){
    int dem1=m, dem2=n;
    for(int i=0;i<m-1;i++){
        if(tmp1[i]){
            for(int j=i+1;j<m;j++){
                if(a[i]==a[j]){
                    tmp1[j]=0;
                    dem1--;
                }
            }
    }
    }
    for(int i=0;i<n-1;i++){
        if(tmp2[i]){
            for(int j=i+1;j<n;j++){
                if(b[i]==b[j]){
                    tmp2[j]=0;
                    dem2--;
                }
            }
    }
    }
    if(dem1==dem2){
        int h=0, k=0;
        int count=0;
        for(int i=0;i<m;i++){
            if(tmp1[i]){ 
                tmp3[h]=a[i];
                h++;
            }
        }
        for(int j=0;j<n;j++){
                if(tmp2[j]){
                    tmp4[k]=b[j];
                    k++;
                }
            }
        for(int i=0;i<dem1;i++){
            for(int j=0;j<dem2;j++){
                if(tmp3[i]==tmp4[j]){
                    count++;
                }
            }
        }
        if(count==dem1) return 1;
        else return 0;
        }
    else return 0;
}
int main(){
        scanf("%d%d", &m, &n);
        Nhap();
        if(Dem1()==1) printf("YES\n");
        else printf("NO\n");
}