#include <stdio.h>
#include <string.h>
char c[200];
int Dem(){
    int dem=0;
    for(int i=0;i<strlen(c)-1;i++){
        if (c[i]==' ' && c[i+1]!=' '){
            dem++;
        }
    }
        if(c[0]!=' '){
            dem++;
        }
    return dem;
}
int main(){
    int k;
    scanf("%d", &k);
    while(k--){
        getchar();
        fgets(c, sizeof c, stdin);
        printf("%d", Dem());
        printf("\n");
}
}