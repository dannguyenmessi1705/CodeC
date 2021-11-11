#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
struct date {
int ngay;
int thang;
int nam;
};
struct tuoi {
int tuoi;
date ngaysinh;
};
void NhapNgaySinh(date &ntn);
void XuatNgaySinh(date ntn);
void NhapDanhSach(tuoi ds[], int &n);
void XuatDanhSach(tuoi ds[], int n);
void TinhTuoi(tuoi &t);
void intuoi(tuoi ds[], int n);
void NhapNgaySinh(date &ntn) {
do {
printf("\n\tNhap ngay : ");
scanf("%d",&ntn.ngay);
} while( ntn.ngay < 1 || ntn.ngay > 31);
do {
printf("\n\tNhap thang : ");
scanf("%d",&ntn.thang);
} while( ntn.thang < 0 || ntn.thang > 12);
printf("\n\tNhap nam : ");
scanf("%d",&ntn.nam);
}
void XuatNgaySinh(date ntn) {
printf("%2d/", ntn.ngay);
printf("%2d/", ntn.thang);
printf("%4d", ntn.nam);
}
void NhapDanhSach(tuoi ds[], int &n) {
do {
printf("\nNhap So luong ngay thang nam sinh(n>0 && n<=10): ");
scanf("%d", &n);
} while(n<1 || n>10);
for(int i = 0; i < n; i++) {
printf("\n\tNgay thang nam sinh thu %d", i+1);
NhapNgaySinh(ds[i].ngaysinh);
}
}
void XuatDanhSach(tuoi ds[], int n) {
printf("\n\t%-5s","STT");
printf("\t%-10s","NGAY THANG NAM");
for(int i = 0; i<n; i++) {
printf("\n\n\t%-5d",i+1);
XuatNgaySinh(ds[i].ngaysinh);
printf("\n");
}
}
int InTuoi(tuoi &t) {
time_t TTIME = time(0);
tm* NOW = localtime(&TTIME);
int NamHienTai = NOW-> tm_year+1900;
t.tuoi = NamHienTai - t.ngaysinh.nam ;
return t.tuoi;
}
void intuoi(tuoi ds[], int n) {
for(int i = 0; i < n; i++) {
printf("%d", InTuoi(ds[i]));
printf("\n");
}
}
int main() {
tuoi ds[10];
int n,i;
int date;
int tuoi;
NhapDanhSach(ds, n);
XuatDanhSach(ds, n);
intuoi(ds, n);
}