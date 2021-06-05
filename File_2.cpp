#include <stdio.h>
FILE *f;
int main(){
    int n;
    f=fopen("C:\\Users\\Admin\\Documents\\File_1.txt", "w+");
    for(int i=1;i<=10;i++){
        scanf("%d", &n);
        fprintf(f,"%d ",n);
    }
    int a=0;
    fseek(f,SEEK_SET,0);
    for(int j=1;j<=5;j++){
        fscanf(f,"%d ",&n);
        printf("%d ",n);
        a+=n;
    }
    printf("Tong 5 so trong day n la: %d", a);


}