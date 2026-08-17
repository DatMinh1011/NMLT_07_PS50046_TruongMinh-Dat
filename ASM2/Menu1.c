#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
struct giaDien
{
    int mucTieuThu;
    float gia;
};
void yeuCau1();
void yeuCau2();
void yeuCau3();
void yeuCau4();
void yeuCau5();
void yeuCau6();
void yeuCau7();
void yeuCau8();
const char *xepLoai(float diem);
void yeuCau9();
void yeuCau10();
    struct Phanso
    {
        int tu;
        int mau;
    };
bool kiemTraSoNguyen(float so);
bool kiemTraSNT(int so);
bool kiemTraSCP(int so);
int timUCLN(int a, int b);
int timBCNN(int a, int b);
struct Phanso nhapPS();
struct Phanso rutGonPS(struct Phanso ps);
int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|                    MENU CHUONG TRINH              |\n");
        printf("+---------------------------------------------------+\n");
        printf("|  0. Thoat chuong trinh                            |\n");
        printf("|  1. Kiem tra so nguyen                            |\n");
        printf("|  2. Tim uoc so chung va boi so chung cua 2 so     |\n");
        printf("|  3. Chuong trinh tinh tien cho quan Karaoke       |\n");
        printf("|  4. Tinh tien dien                                |\n");
        printf("|  5. Doi tien                                      |\n");
        printf("|  6. Tinh lai suat vay ngan hang vay tra gop       |\n");
        printf("|  7. Vay tien mua xe                               |\n");
        printf("|  8. Sap xep thong tin nhan vien                   |\n");
        printf("|  9. Game FPOLY - LOTT (2/15)                      |\n");
        printf("|  10. Tinh toan phan so                            |\n");
        printf("+---------------------------------------------------+\n");
        printf("=> Chon chuc nang cua ban (0-10): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban chon chuc nang 0: Thoat chuong trinh\n");
            break;
        case 1:
            yeuCau1();
            break;
        case 2:
            yeuCau2();
            break;
        case 3:
            yeuCau3();
            break;
        case 4:
            yeuCau4();
            break;
        case 5:
            yeuCau5();
            break;
        case 6:
            yeuCau6();
            break;
        case 7:
            yeuCau7();
            break;
        case 8:
            yeuCau8();
            break;
        case 9:
            yeuCau9();
            break;
        case 10:
            yeuCau10();
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 10!\n");
            break;
        }
    } while (chon != 0);
    return 0;
}
void yeuCau1()
{
    float so;
    getchar();
    printf("Nhap so: ");
    scanf("%f", &so);
    if (kiemTraSoNguyen(so))
    {
        printf("So %.2f la so nguyen. \n", so);
        if (kiemTraSNT((int)so))
        {
            printf("So %.2f la so nguyen to. \n", so);
        }
        else
        {
            printf("So %.2f khong phai la so nguyen to. \n", so);
        }
        printf("%s\n", kiemTraSCP((int)so) ? "la so chinh phuong" : "khong phai la so chinh phuong");
    }
    else
    {
        printf("So %.2f khong phai la so nguyen .\n", so);
    }
}
bool kiemTraSoNguyen(float so)
{
    if ((int)so == so)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool kiemTraSNT(int so)
{
    if (so < 2)
        return false;
    if (so == 2)
        return true;
    for (int i = 2; i <= so / 2; i++)
    {
        if (so % i == 0)
            return false;
    }
    return true;
}
bool kiemTraSCP(int so)
{
    if (kiemTraSoNguyen(sqrt(so)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int timUCLN(int a, int b)
{
    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
int timBCNN(int a, int b)
{
    return (a * b) / timUCLN(a, b);
}
void yeuCau2()
{
    int a, b;
    printf("Nhap a,b: ");
    scanf("%d %d", &a, &b);
    int ucln = timUCLN(a, b);
    int bcnn = timBCNN(a, b);
    printf("Uoc chung lon nhat cua %d va %d la %d\n", a, b, ucln);
    printf("Boi chung nho nhat cua %d va %d la %d\n", a, b, bcnn);
}
void yeuCau3()
{
    int gioVao, gioRa, soGio, tongTien;
    do
    {
        printf("Nhap gio vao , gio ra: ");
        scanf("%d %d", &gioVao, &gioRa);
    } while ((gioVao > gioRa) || gioVao < 12 || (gioRa > 23));
    soGio = gioRa - gioVao;
    if (soGio <= 3)
    {
        tongTien = soGio * 150000;
    }
    else
    {
        tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }
    if (gioVao >= 14 && gioVao <= 17)
        tongTien *= 0.9;
    printf("Tong tien ban hat tu %d den %d la: %dVND\n", gioVao, gioRa, tongTien);
}
void yeuCau4()
{
    struct giaDien bangGiaDien[6] = {
        {50, 1678},
        {100, 1734},
        {200, 2014},
        {300, 2536},
        {400, 2834},
        {401, 2927}};
    int soKwh, tongTien = 0;
    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &soKwh);
    if (soKwh <= bangGiaDien[0].mucTieuThu)
    {
        tongTien = soKwh * bangGiaDien[0].gia;
    }
    else if (soKwh <= bangGiaDien[1].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + (soKwh - 50) * bangGiaDien[1].gia;
    }
    else if (soKwh <= bangGiaDien[2].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + (soKwh - 100) * bangGiaDien[2].gia;
    }
    else if (soKwh <= bangGiaDien[3].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + (soKwh - 200) * bangGiaDien[3].gia;
    }
    else if (soKwh <= bangGiaDien[4].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + (soKwh - 300) * bangGiaDien[4].gia;
    }
    else
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + 100 * bangGiaDien[4].gia + (soKwh - 400) * bangGiaDien[5].gia;
    }
    printf("Tong tien dien: %d dong\n", tongTien);
}
void yeuCau5()
{
    struct loaiTienTe
    {
        int soLuongTo;
        int menhGia;
    };
    struct loaiTienTe dsTienTe[] = {
        {0, 1000},
        {0, 2000},
        {0, 5000},
        {0, 10000},
        {0, 20000},
        {0, 50000},
        {0, 100000},
        {0, 200000},
        {0, 500000}};
    int soPT = 9;
    int soTien;
    printf("Nhap so tien can doi: ");
    scanf("%d", &soTien);
    for (int i = soPT - 1; i >= 0; i--)
    {
        dsTienTe[i].soLuongTo = soTien / dsTienTe[i].menhGia;
        soTien = soTien % dsTienTe[i].menhGia;
        if (soTien == 0)
            break;
    }
    for (int i = 0; i < soPT; i++)
    {
        if (dsTienTe[i].soLuongTo > 0)
        {
            printf("Menh gia: %9d so to: %d\n", dsTienTe[i].menhGia, dsTienTe[i].soLuongTo);
        }
    }
}
void yeuCau6()
{
    int tienVay = 12000000, kyHan = 12;
    float laiThang = 0.05;
    int gocPhaiTra = tienVay / kyHan;

    printf("%6s%18s%18s%18s%18s\n", "Thang", "Tien lai", "Goc phai tra", "Tien phai tra", "Con lai");
    for (int i = 1; i <= kyHan; i++)
    {
        int tienLai = tienVay * laiThang;
        tienVay = tienVay - gocPhaiTra;
        printf("%6d%18d%18d%18d%18d\n", i, tienLai, gocPhaiTra, tienLai + gocPhaiTra, tienVay);
    }
}
void yeuCau7()
{
          int tienVay = 500000000;
    int kyHan = 24 * 12;
    float laiThang = 7.2 / 12;
    int tienGoc = tienVay / kyHan;
    float phanTramVay;
    printf("\nBan chon chuc nang 7: vay tien mua xe\n");
    printf("\nNhap so phan tram vay toi da (0-100): ");
    scanf("%f", &phanTramVay);
    while (phanTramVay < 0 || phanTramVay > 100)
    {
        printf("Vui long nhap lai so phantram vay toi da (0-100)!\n");
        printf("\nNhap so phantram vay toi da (0-100): ");
        scanf("%f", &phanTramVay);
    }
    for (int i = 1; i <= kyHan; i++)
    {
        int tienLai = tienVay * laiThang;
        tienVay = tienVay - tienGoc;
        int tienPhaitra = tienLai + tienGoc;
        if (i == kyHan)
        {
            tienPhaitra = tienPhaitra + tienVay;
            tienVay = 0;
        }
        printf("%6d%18d%18d%18d%18d\n", i, (int)tienLai, tienGoc, (int)tienGoc + (int)tienLai, tienVay);
    }
}
void yeuCau8()
{
     struct sinhVien
    {
        char mssv[9];
        char tenSV[50];
        float diemSV;
    };
    struct sinhVien dsSinhVien[40] =
        {
            {"ps1234", "Nguyen Van A", 7.5},
            {"ps1223", "Tran Thi B", 5.3},
            {"ps1222", "Chau Thi Truc Quyen", 9.9}};
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        printf("%5d%10s%30s%6.2f%10s", i + 1, dsSinhVien[i].mssv, dsSinhVien[i].tenSV, dsSinhVien[i].diemSV, xepLoai(dsSinhVien[i].diemSV));
    }
}
const char *xepLoai(float diem)
{
    if (diem > 8.0)
        return "Gioi";
    else if (diem > 6.5)
        return "Kha";
    else if (diem > 5.0)
        return "Trung Binh";
    else
        return "Yeu";
}
void yeuCau9()
{
 srand(time(NULL));
    int r1 = rand() % 15 + 1, r2;
    do
    {
        r2 = rand() % 15 + 1;
    } while (r2 != r1);
    int a,b;
    printf("Nhap hai so: ");
    scanf("%d %d", &a, &b);
    int dem = 0;
    if  ((a==r1) || ( a==r2))
    dem++;
    if  ((b==r1) || ( b==r2))
    dem++;
    switch (dem)
    {
        case 0:
            printf("CChuc ban may man lan sau!\n");
            break;
        case 1:
            printf("Chuc mung ban da trung giai nhi!\n");
            break;
        case 2:
            printf("Chuc mung ban da trung giai nhat!\n");
            break;
    }
}
void yeuCau10()
{
   struct Phanso ps1,ps2,psTong,psHieu,psTich,psThuong;
   printf("Nhap phan so 1 : \n");
    ps1 = nhapPS();
   printf("Nhap phan so 2 : \n");
    ps2 = nhapPS();
   
   psTong.tu = ps1.tu*ps2.mau + ps2.tu*ps1.mau;
   psTong.mau = ps1.mau*ps2.mau;

   psHieu.tu = ps1.tu*ps2.mau - ps2.tu*ps1.mau;
   psHieu.mau = ps1.mau*ps2.mau;

   psTich.tu = ps1.tu*ps2.tu;
   psTich.mau = ps1.mau*ps2.mau;

   psThuong.tu = ps1.tu*ps2.mau;
   psThuong.mau = ps1.mau*ps2.tu;
   printf("Tong: %d/%d + %d/%d = %d/%d -> %d/%d\n",
    ps1.tu,ps1.mau,ps2.tu,ps2.mau,psTong.tu,psTong.mau, rutGonPS(psTong).tu, rutGonPS(psTong).mau);
    printf("Hieu: %d/%d - %d/%d = %d/%d -> %d/%d\n",
    ps1.tu,ps1.mau,ps2.tu,ps2.mau,psHieu.tu,psHieu.mau, rutGonPS(psHieu).tu, rutGonPS(psHieu).mau);
    printf("Tich: %d/%d * %d/%d = %d/%d -> %d/%d\n",
    ps1.tu,ps1.mau,ps2.tu,ps2.mau,psTich.tu,psTich.mau, rutGonPS(psTich).tu, rutGonPS(psTich).mau);
    printf("Thuong: %d/%d / %d/%d = %d/%d -> %d/%d\n",
    ps1.tu,ps1.mau,ps2.tu,ps2.mau,psThuong.tu,psThuong.mau, rutGonPS(psThuong).tu, rutGonPS(psThuong).mau);
}
struct Phanso nhapPS(){
    struct Phanso ps;
    printf("Nhap (tu mau): ");
    scanf("%d%d", &ps.tu, &ps.mau);
    return ps;
}
struct Phanso rutGonPS(struct Phanso ps){
    struct  Phanso tempPS;
    tempPS.tu = ps.tu/timUCLN(ps.tu, ps.mau);
    tempPS.mau = ps.mau/timUCLN(ps.tu, ps.mau);
    return tempPS;
}