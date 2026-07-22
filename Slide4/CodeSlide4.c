#include <stdio.h>
int main(){
    double n,m,tong;
    int s,index;
    // in so tu 0 den 10
/*     printf("In so tu 0 den 10:\n");
    for(int i =0; i <=10; i++){
        printf("%d\t", i);
    }
    printf("\nSo chan tu 1 den 10:\n");
    //so chan tu 1 den 10
    for( int i=1; i<=10; i++){
             if(i%2 == 0){
            printf("%d\t", i);
        }
    }
    //in so chia het cho3 tu 1- 100
    printf("In so chia het cho3 tu 1 den 100:\n");
    for(int i =1; i <=100; i++){
        if(i%3 == 0){
            printf("%d\t", i);
        }
    }
    // in boi so n va m (nhap tu ban phim) giua cac so 1-100
    printf("\nin boi so n va m (nhap tu ban phim) giua cac so 1-100:\n");
    printf(" nhap n,m:");
    scanf("%d%d", &n, &m);
    for( int i =1; i <=100; i++){
        if(i%n == 0 && i%m == 0){
            printf("%d\t", i);
        }
    }
    // nhap bang cuu chuong
printf("nhap n");
scanf("%d", &n);
printf("Bang cuu chuong  %d:\n", n);
for(int i = 1; i <= 10; i++){
    printf(" %2d x %2d = %3d\n", n, i, n * i);
} */

// tong so gao bang cac o co vua
printf("Tong so gao bang cac o co vua:\n");
n=1;
tong = 0;
for(int i = 1; i <= 64; i++)
{
    tong += n; // tong = tong + n
    n = n*2; // n *= 2
    printf("%d \t%0lf\t%0lf\n", i,n,tong);
}
printf("\nTong so gao: %d\n", tong);
s=0;
index = 1;
while(s < 100)
{
    printf("%d\t %d\n", index, s);
    s += 3*index;
    index++;
}
    return 0;
}