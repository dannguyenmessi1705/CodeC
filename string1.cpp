#include <stdio.h>
#define PASSWORD 17052002
int main(){
    char t[100], name[100];
    int age, p;
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &age);
    getchar();
    printf("Nhap ten ban vao: ");
    fgets(name, sizeof name, stdin);
    printf("\n\t %d - %s", age, name);
    printf("\nXAC MINH THANH CONG - VUI LONG NHAP PASSWORD(Co 8 chu so): ");
    for (int i=1;i<=3;i++){
        scanf("%d", &p);
        fflush(stdin);
        if(p==PASSWORD){
            printf("Nhap so tien muon rut: ");
            gets(t);
            printf("Rut tien thanh cong, so tien la: %s", t);
            return 0;
        }
        else {
            printf("\nNhap lai mat khau lan %d: ", i);
        }
    }
        printf("\nTai khoan cua ban da bi khoa");
}        
