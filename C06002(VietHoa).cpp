#include <stdio.h>
char c[100];
void Upper(){
    for(int i=0;i<100;i++){
        if (c[i]>='a' && c[i]<='z')
            c[i]=c[i]-32;
    }
    printf("%s", c);
}
int main(){
    fgets(c, sizeof c, stdin);
    Upper();
}