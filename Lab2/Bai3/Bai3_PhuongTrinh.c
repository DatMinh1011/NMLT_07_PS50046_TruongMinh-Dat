#include <stdio.h>
int main ()
{
float a,b,x;
do{
printf("Nhap a: ");
scanf("%f",&a);
if (a==0)
{printf("a khong duoc bang 0, vui long nhap lai\n");}
}
while(a==0);
printf("Nhap b: ");
scanf("%f",&b);
x= -1.0*b/a;
printf("Nghiem cua phuong trinh la: %.2f\n",x);
return 0;
}