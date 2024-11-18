#include<stdio.h>

int main(){
	int a;
	int b;
	float thuong;
	printf("nhap vao so nguyen a : ");
	scanf("%d", &a);
	printf("nhao vao so nguyen b : ");
	scanf("%d", &b);
	
	printf("Tong %d va %d la: %d\n", a, b, a + b);
    printf("Hieu %d va %d la: %d\n", a, b, a - b);
    printf("Tich %d va %d la: %d\n", a, b, a * b);
    
    if(b != 0){
        thuong = (float) a/b;
    	printf("thuong %d va %d la: %f", a, b, a/b);
	}
	else{
		printf("ko chia dc cho 0");
		
	}
	return 0;
	}