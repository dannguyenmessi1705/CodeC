#include <stdio.h>
struct SinhVien{
    int TT;
    char hoten[30];
    char MaSV[30];
    float DiemTB;
};
typedef SinhVien sinhvien;
void Nhap(sinhvien &sv){
    printf("Nhap so thu tu sinh vien: ");
    scanf("%d", &sv.TT);
    printf("Nhap Ho va Ten sinh vien: ");
    fflush(stdin);
    gets(sv.hoten);
    printf("Nhap Ma sinh vien: ");
    gets(sv.MaSV);
    printf("Nhap diem trung binh: ");
    scanf("%f", &sv.DiemTB);
}
void Xuat(sinhvien sv){
    printf("==========THONG TIN SINH VIEN THU %d============\n", sv.TT);
    printf("\tHo va Ten: %s\n", sv.hoten);
    printf("\tMa SV: %s\n", sv.MaSV);
    printf("\tDiem Trung Binh: %.2f\n", sv.DiemTB);
}
int main(){
    sinhvien x1, x2, x3, x4;
    Nhap(x1);
    Nhap(x2);
    Nhap(x3);
    Nhap(x4);
    Xuat(x1);
    Xuat(x2); 
    Xuat(x3);
    Xuat(x4);
}
