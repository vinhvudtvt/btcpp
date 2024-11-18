//Ví dụ 11: Viết chương trình nhập vào 3 số nguyên a, b, c. Tìm và in ra số lớn nhất.
//viết if dạng 2
#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	
	printf("nhap so nguyen a :", a);
	scanf("%d", &a);
	printf("nhap so nguyen b :", b);
	scanf("%d", &b);
	printf("nhap so nguyen c :", c);
	scanf("%d", &c);
	
	if(a>=b&&a>=c){
		printf("so lon nhat la :%d\n", a);
	}
	else if(c>=a&&c>=b){
		printf("so lon nhat la :%d\n", c);
	}
	else{
		printf("so lon nhat la :%d\n", b);
		
	}
	return 0;
}