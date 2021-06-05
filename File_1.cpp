#include <stdio.h>
int main(){
    FILE *fp;
    char s[] = "Lap trinh C co ban";
    char s1[50]; 
    fp = fopen ("C:\\Users\\Admin\\Desktop\\File_1.txt", "w+"); // Trong C dia chi can co 2 dau / //
    fwrite(s, sizeof(s), 1, fp);
    // muon doc tep thi phai chuyen con tro den dau tep //
    fseek(fp, SEEK_SET, 0); // SEEK_SET va 0 la dau tep, _CUR va 1 la vi tri hien tai, _END va 2 la vi tri cuoi tep.//
    fread(s1, sizeof s1, 1, fp);
    printf("%s", s1);
    fclose(fp);
    return 0;
} 