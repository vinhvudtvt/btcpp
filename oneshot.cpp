#include <stdio.h>

int main() {
    int N;               
    float diem;        
    float sum = 0;       
    float diemtb;      
    int i = 1;           

    printf("nhap so luong sinh vien : ");
    scanf("%d", &N);
    while (N <= 0) {
        printf("so luong sinh vien phai la so nguyen duong. Vui long nhap lai: ");
        scanf("%d", &N);
    }
    while (i <= N) {
        printf("nhap diem cua sinh vien thu %d: ", i);
        scanf("%f", &diem);
        sum += diem;
        i++;
    }
    diemtb = sum / N;

    printf("diem trung binh cua %d sinh vien: %.2f\n", N, diemtb);

    return 0;
}
	
