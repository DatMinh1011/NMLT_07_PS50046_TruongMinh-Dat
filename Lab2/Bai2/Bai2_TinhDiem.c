#include    <stdio.h>
int main()
{
int DiemToan, Ly, Hoa;
printf("Nhap diem Toan: ");
scanf("%d", &DiemToan);
printf("Nhap diem Ly: ");
scanf("%d", &Ly);
printf("Nhap diem Hoa: ");
scanf("%d", &Hoa);
printf("diem Tb: %.2f\n", (float)(DiemToan*3 + Ly*2 + Hoa)/6.0);
return 0;
}      

