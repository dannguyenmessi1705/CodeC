#include <stdio.h>
#include <string.h>
char c[200];
int Dem(char c[]){
    int dem=1;
    for(int i=0;i<strlen(c)-1;i++){
        if (c[i]==' ' && c[i+1]!=' '){
            dem++;
        }
    }

    return dem;
}
void Xoa(char c[]){
    if(c[strlen(c)-1]=='\n'){   
        c[strlen(c)-1]='\0';
    }
}
int main(){
    int k;
    scanf("%d", &k);
    getchar();
    while(k--){
        fgets(c, sizeof c, stdin);
        Xoa(c);
        printf("%d\n", Dem(c));
}
}