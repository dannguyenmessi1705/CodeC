#include <stdio.h>
typedef struct sinhvien{
    char ten[50];
    char nam[50];
    int stt;
    double p1;
    double p2;
    double p3;
    double p;
} SV;
int main(){
    int n,i,j;
    SV s[100];
    scanf("%d\n", &n);
    for(i=0;i<n;i++){
        s[i].stt=i+1;
        scanf("\n");
        gets(s[i].ten);
        scanf("\n");
        gets(s[i].nam);
        scanf("\n");
        scanf("%lf%lf%lf", &s[i].p1, &s[i].p2, &s[i].p3);
        s[i].p=s[i].p1+s[i].p2+s[i].p3;
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[i].p<s[j].p){
                SV tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d %s %s %.1lf\n", s[i].stt, s[i].ten, s[i].nam, s[i].p);
    }

}
