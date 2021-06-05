#include <stdio.h>
#include <string.h>
char a[200], c[200];
void Nhap(char a[]){
    gets(a);
    if(a[strlen(a)]=='\0') a[strlen(a)]=' ';
    int len=strlen(a);
    int sizec=0, tmp=0, k, h=0, i, j;
    for(i=0;i<len;i++){
        h=0;
        c[sizec]=a[i];
        sizec++;
        if(a[i]==' '){
            for(j=i+1;j<len;j++){
                if(c[tmp]==a[j]) tmp++;
                else tmp=0;
                if(tmp==sizec){
                    h=1;
                    for(k=j;k<len;k++){
                        a[k+1-sizec]=a[k+1];
                        i=-1;
                    }
                }
            }
            sizec=0;
            len=strlen(a);
            tmp=0;
        }

    }
}
void Xoa(char a[]){
    if(a[strlen(a)]==' ') a[strlen(a)]='\0';
}
int main(){
    Nhap(a);
    Xoa(a);
    printf("%s", a);
}