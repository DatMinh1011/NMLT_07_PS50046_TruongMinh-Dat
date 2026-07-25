#include <stdio.h>
#include <math.h>
int main()
{
    int chon;
    do
    {
        printf("-------------------------------------------------\n");
        printf("|                 CHON CHUC NANG                |\n");
        printf("-------------------------------------------------\n");
        printf("| 0.  Thoat chuong trinh                        |\n");
        printf("| 1.  Kiem tra so nguyen                        |\n");
        printf("| 2.  Tim uoc so chung va so boi chung          |\n");
        printf("| 3.  Tinh tien dien quan karaoke               |\n");
        printf("| 4.  Tinh tien dien                            |\n");
        printf("| 5.  Doi tien                                  |\n");
        printf("| 6.  Tinh lai xuat vay ngan hang vay tra gop   |\n");
        printf("| 7.  Vay tien mua xe                           |\n");
        printf("| 8.  Sap xep thong tinh sinh vien              |\n");
        printf("| 9.  Game Poly-LoTT                            |\n");
        printf("| 10. Tinh toan phan so                         |\n");
        printf("-------------------------------------------------\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 0:
            {
            printf("Ban da chon 0. Thoat chuong trinh\n");
            break;
            }
            case 1:
            {
            printf("Ban da chon 1. Nhap X \n");
            break;
            }
            case 2:
            {
            printf("Ban da chon 2. Nhap X \n");
            break;
            }
            case 3:
            {
                printf("Ban da chon 3. Nhap so Kw \n");
                break;
            }
            case 4:
            {
                printf("Ban da chon 4. Nhap so tien dien \n");
                break;
            }
            case 5:
            {
                printf("Ban da chon 5. Nhap ten moi \n");
                break;
            }
            case 6:
            {
                printf("Ban da chon 6. Nhap so tien da vay \n");
                break;
            }
            case 7:
            {
                printf("Ban da chon 7. Nhap so tien vay \n");
                break;
            }
            case 8:
            {
                printf("Ban da chon 8. Nhap so sinh vien \n");
                break;
            }
            case 9:
            {
                printf("Ban da chon 9. Chuan bi bat dau tro choi \n");
                break;
            }
            case 10:
            {
                printf("Ban da chon 10. Nhap so phan so \n");
                break;
            }
        }
    } while (chon != 0);
    return 0;
}