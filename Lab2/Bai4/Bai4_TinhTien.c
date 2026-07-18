//gia gao =2$
//gia dau =1.5$
//ti gia do 26.29
//Nhap so luong gao va dau tinh tien
#include <stdio.h>
int main()
{
 int   a=2,b=1.5;
 float c=26.29;
 printf("Nhap so luong dau: ");
 scanf("%d", &a);
 printf("Nhap so luong gao: ");
 scanf("%d", &b);
 printf("So luong dau la: %.2f vnd\n", a*c);
 printf("So luong gao la: %.2f vnd\n", b*c);
 return 0;
}