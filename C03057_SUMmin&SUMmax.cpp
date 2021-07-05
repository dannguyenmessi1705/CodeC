#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[20], a[20], b[20];
long long Max(char s[]){
    int len=strlen(s);
    long long max;
    for(int i=0;i<len;i++)
        if(s[i]=='5') s[i]='6';
    max=atoll(s);
    return max;
}
long long Min(char s[]){
    int len=strlen(s);
    long long min;
    for(int i=0;i<len;i++)
        if(s[i]=='6') s[i]='5';
    min=atoll(s);
    return min;
}
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        getchar();
        scanf("%s %s", a, b);
        printf("%llu %llu\n", Min(a)+Min(b), Max(a)+Max(b));
    }

}