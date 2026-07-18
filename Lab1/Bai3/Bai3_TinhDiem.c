#include <stdio.h>

int main() {
    char mssv[50];
    char hoTen[100];
    float toan, ly, hoa;
    float diemTrungBinh;

    printf("Nhap ma so sinh vien: ");
    fgets(mssv, sizeof(mssv), stdin);

    printf("Nhap ho va ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    diemTrungBinh = (toan * 2 + ly + hoa) / 4;

    printf("\nMa so sinh vien: %s", mssv);
    printf("Ho Va Ten: %s", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}