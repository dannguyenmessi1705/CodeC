#include <stdio.h>
#define GIOI "\nXep loai gioi"
#define KHA "\nXep loai kha"
#define TB "\nXep loai trung binh"
#define YEU "\nXep loai yeu"
int main(){
    float diemToan, diemAnh, diemVan;
    printf("\nNhap diem Toan = ");
    scanf("%f", &diemToan);
    printf("\nNhap diem Anh = ");
    scanf("%f", &diemAnh);
    printf("\nNhap diem Van = ");
    scanf("%f", &diemVan);
    float diemTB;
    diemTB = (diemToan + diemAnh + diemVan)/3;
    printf("\nDiemTB = %.2f, diemTB");
        if (diemTB < 4)
    { 
        printf(YEU);
    } else if (diemTB < 6.5)
    { 
        printf(TB);
    } else if (diemTB < 8)
    { 
        printf(KHA);
    } else
    { 
        printf(GIOI);
    }
    

    

}
