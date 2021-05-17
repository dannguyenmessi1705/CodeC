#include <stdio.h>
#include <ctype.h>
#include <string.h>
char c[100];
//char Lower(){
//    for(int i=0;i<strlen(c);i++){
//        c[i]=tolower(c[i]);
//    }
//    printf("Xau sau khi viet thuong la: %s", c);
//}
//char Upper(){
//    for(int i=0;i<strlen(c);i++){
//        c[i]=toupper(c[i]);
//    }
//    printf("Xau sau khi viet hoa la: %s", c);
//}
int main(){
    fgets(c, sizeof c, stdin);
    printf("Xau sau khi viet thuong la: %s", strlwr(c));
    printf("Xau sau khi viet hoa la: %s", strupr(c));
//    Lower();
//    Upper();
    return 0;
}
