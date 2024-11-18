#include<stdio.h>

int main() {
	int n = 0, i =1 ;
	float diem=0, tong=0, diemtb;
	printf("so luong sinh vien :");
	scanf("%d", &n);
	if (n <= 0) {
		printf("so luong sinh vien khong hop le yeu cau nhap lai :", n);
			return 1;
	}
	for (; i <= n; i++) {
		if (diem < 1 && diem >10) {
			printf("diem khong hop le yeu cau nhap lai : %f", diem);
		}
		printf("diem cua hoc sinh thu %d :", i);
		scanf("%f", &diem);
		tong += diem;
	}
	diemtb = tong / n;
	printf("%f", diemtb);

	return 0;
}
