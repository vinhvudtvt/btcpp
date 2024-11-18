//7.Viết chương trình nhập vào giờ phút giây (hh:mm:ss). Cộng thêm số giây nhập vào
//và in ra kết quả dưới dạng hh:mm:ss.
#include <stdio.h>

int main() {
    int gio, phut, giay, them;
    
    printf("nhap gio : ");
    scanf("%d", &gio);
    printf("Nhap phut : ");
    scanf("%d", &phut);
    printf("Nhap giay : ");
    scanf("%d", &giay);

    
    printf("nhap so giay cong them : ");
    scanf("%d", &them);

    
    int tong = gio * 3600 + phut * 60 + giay + them;

  
    gio = (tong / 3600) % 24; 
    phut = (tong % 3600) / 60;  
    giay = tong % 60;            

  
    printf("Thoi gian sau la : %02d : %02d : %02d\n", gio, phut, giay);

    return 0;
}