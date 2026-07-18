#include    <stdio.h>
#define     PI 3.14159
int main()
{
    int dai,rong,r;
    printf("Hay nhap chieu dai: ");
    scanf("%d", &dai);
    printf("Hay nhap chieu rong: ");
    scanf("%d", &rong);
    printf("dai: %d\n rong: %d\n chu vi: %d\n dien tich: %d\n ", dai, rong, 2 * (dai + rong), dai * rong);

    printf("Hay nhap ban kinh: ");
    scanf("%d", &r);
    float chuVi = 2 * PI * r;
    float dienTich = PI * r * r;
    printf("chu vi: %.2f\n dien tich: %.2f\n ban kinh: %d\n", chuVi, dienTich, r);
    return 0;
}   