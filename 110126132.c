#include<stdio.h>
int main()
{
    int n,m;
    printf("nhap so nguyen n = ");
    scanf("%d",&n);
    printf("nhap so nguyen m = ");
    scanf("%d",&m);
    float tong,hieu,tich;
    float thuong=(float)n/m;
    tong=n+m;
    hieu=n-m;
    tich=n*m;
    printf("Tong n + m = %.2f\n",tong);
    printf("Hieu n - m = %.2f\n",hieu);
    printf("Tich n X m = %.2f\n",tich);
    if(m==0)
    {
        printf("Phep tinh loi do m = 0\n");
    }else{
        printf("Thuong n / m = %.2f\n",thuong);
    }
    return 0;
}