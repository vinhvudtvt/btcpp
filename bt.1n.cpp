//VD3 : Viết chương trình nhập vào 2 số nguyên a, b. Tìm và in ra số lớn nhất.
// viết dưới dạng if dạng 2.

#include <stdio.h>

int main(){
	int a;
	int b;
	printf("nhap so nguyen a :");
	scanf("%d", &a);
	printf("nhap so nguyen b :");
	scanf("%d", &b);
	 
	 if(a!=b){
	 	if(a>b){
	 		printf("so lon nhat la :%d\n", a);
		 }
		 else{
		 	printf("so lon nhat la :%d\n", b);
		 	
		 }
	 }
	 else{
	 	printf("hai so bang nhau :%d\n ", a);
	 }
	 return 0;
}

