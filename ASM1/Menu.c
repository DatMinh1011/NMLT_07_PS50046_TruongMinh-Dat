#include <stdio.h>
#include <math.h>
int main()
{
    int chon,x;
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
            scanf("%d", &x );
            printf("%d la so nguyen,x,\n");
            
            }
            break;
            case 2:("Nhap so nguyen x\n");
            break;
        }
    } while (chon != 9);
}