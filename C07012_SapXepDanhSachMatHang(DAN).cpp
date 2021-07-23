#include <stdio.h>
typedef struct MatHang{
    int stt;
    char ten[100], ma[100];
    double buy, sell, profit;
} MH;
int main(){
    int n;
    MH s[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        s[i].stt=i+1;
        scanf("\n");
        gets(s[i].ten);
        scanf("\n");
        gets(s[i].ma);
        scanf("\n");
        scanf("%lf%lf", &s[i].sell, &s[i].buy);
        s[i].profit=s[i].buy-s[i].sell;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i].profit<s[j].profit){
                MH tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d %s %s %.2lf\n", s[i].stt, s[i].ten, s[i].ma, s[i].profit);
    }
    
}