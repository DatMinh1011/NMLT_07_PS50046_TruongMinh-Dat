#include <stdio.h>
#include <math.h>
int main()
{
    int chon, a, b, c, d;
    int bac1, bac2, bac3, bac4, bac5, bac6; 
    float t, x1, x2, delta;
    do
    {
        printf("+-------------------------------+\n");
        printf("|  MUNU CHƯƠNG TRÌNH LAB 3.     |\n");
        printf("+-------------------------------+\n");
        printf("| 0. Thoat chuong trinh.        |\n");
        printf("| 1. Tinh hoc luc sinh vien     |\n");
        printf("| 2. Giai phuong trinh bac 2    |\n");
        printf("| 3. Tinh tien dien             |\n");
        printf("+-------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 3): ");
        scanf("%d", &chon); //chon :0
        switch (chon)
        {
        case 0:
            printf("Ban da chon chuc nang: 0. Thoat chuong trinh.\n");
            break;
        case 1:
            printf("Ban da chon chuc nang: 1. Tinh hoc luc sinh vien.\n");
            printf("Nhap diem trung binh: ");
            scanf("%f", &t);
            if (t >= 9 && t <= 10)
            {
                printf("Hoc luc xuat sac\n");
            }
            else if (t >= 8 && t < 9)
            {
                printf("Hoc luc gioi\n");
            }
            else if (t >= 6.5 && t < 8)
            {
                printf("Hoc luc kha\n");
            }
            else if (t >= 5 && t < 6.5)
            {
                printf("Hoc luc trung binh\n");
            }
            else if (t >= 3.5 && t < 5)
            {
                printf("Hoc luc yeu\n");
            }
            else if (t >= 0 && t < 3.5)
            {
                printf("Hoc luc kem\n");
            }
            else
            {
                printf("Diem so nhap vao khong hop le!\n");
            }
            break;
        case 2:
           printf("Ban chon chuc nang 2: Giai phuong trinh bac 2\n");
            printf("Nhap he so a, b, c: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == 0)
            {

                printf("Truong hop 1: a = 0 \n");
                printf("Phuong trinh bac nhat %dx+%d=0\n", b, c);
                if (b == 0 && c == 0)
                {
                    printf("b = 0 va c = 0\n");
                    printf("Phuong trinh vo so nghiem\n");
                }
                else if (b == 0 && c != 0)
                {
                    printf("b = 0 va c khac 0\n");
                    printf("Phuong trinh vo nghiem\n");
                }
                else if (b != 0)
                {
                    x1 = -(float)c / b;
                    printf("b khac 0\n");
                    printf("Phuong trinh co nghiem duy nhat: x=%.2f\n", x1);
                }
            }
            else if (a != 0)
            {
                printf("Truong hop 2: a khac 0\n");
                delta = (b * b) - (4 * a * c);
                if (delta == 0)
                {
                    x1 = (-(float)b) / (2 * a);
                    printf("Delta = 0\n");
                    printf("Phuong trinh %dx^2+%dx+%d=0 nghiem kep x= %.2f\n", a, b, c, x1);
                }
                else if (delta > 0)
                {
                    x1 = (-(float)b + sqrt(delta)) / (2 * a);
                    x2 = (-(float)b - sqrt(delta)) / (2 * a);
                    printf("Delta > 0\n");
                    printf("phuong trinh %dx^2+%dx+%d = 0 co nghiem 2 nghiem x1=%.2f, x2=%.2f\n", a, b, c, x1, x2);
                }
                else if (delta < 0)
                {
                    printf("Delta < 0\n");
                    printf("Phuong trinh %dx^2+%dx+%d=0 vo nghiem\n", a, b, c);
                }
            }
            break;
        case 3:
            printf("Ban chon chuc nang 3: Tien tien dien\n");
            printf("Nhap so Kwh/thang: ");
            scanf("%d", &d);
            {
                if (d <= 0)
                {
                    printf("Ban nhap so Kwh khong hop le!\n");
                }
                else if (d > 0 && d <= 50)
                {
                    bac1 = d * 1678;
                    printf("So kwh ban vua nhap dat Bac 1\n");
                    printf("=> Tong tien dien cua %dKwh/thang la: %d dong\n", d, bac1);
                }
                else if (d >= 51 && d <= 100)
                {
                    bac2 = (50 * 1678) + ((d - 50) * 1734);
                    printf("So kwh ban vua nhap dat Bac 2\n");
                    printf("=> Tong tien dien cua %dKwh/thang la: %d dong\n", d, bac2);
                                }
                else if (d >= 101 && d <= 200)
                {
                    bac3 = (50 * 1678) + (50 * 1734) + ((d - 100) * 2014);
                    printf("So kwh ban vua nhap dat Bac 3\n");
                    printf("=> Tong tien cua %dKwh/thang la: %d dong\n", d, bac3);
                }
                else if (d >= 201 && d < 300)
                {
bac4 = (50 * 1678) + (50 * 1743) + (100 * 2014) + ((d - 200) * 2536);
                    printf("So kwh ban vua nhap dat Bac 4\n");
                    printf("=>Tong tien dien cua %dKwh/thang la: %d dong\n", d, bac4);
                }
                else if (d >= 301 && d <= 400)
                {
                    bac5 = (50 * 1678) + (50 * 1743) + (100 * 2014) + (100 * 2536) + ((d - 300) * 2834);
                    printf("So kwh ban vua nhap dat Bac 5\n");
                    printf("=> Tong tien dien cua %dKwh/thang la: %d dong\n", d, bac5);
                }
                else if (d >= 401)
                {
                    bac6 = (50 * 1678) + (50 * 1743) + (100 * 2014) + (100 * 2536) + (100 * 2834) + ((d - 400) * 2927);
                    printf("So kwh ban vua nhap dat Bac 6\n");
                    printf("=> Tong tien dien cua %dKwh/thang la: %d dong\n", d, bac6);
                }
            }
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0); //0 != 0

    return 0;
}