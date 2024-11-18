//Ví dụ 11: Viết chương trình nhập vào 3 số nguyên a, b, c. Tìm và in ra số lớn nhất.
//viết if dạng 1
#include <stdio.h>
 
 int main(){
 	int a;
 	int b;
 	int c;
 	int max;
 	
 	printf("nhap vao so nguyen a :", a);
 	scanf("%d", &a);
 	printf("nhap vao so nguyen b :", b);
 	scanf("%d", &b);
 	printf("nhap vao so nguyen c :", c);
 	scanf("%d", &c);
 	
     max = a; 
 	  
 	if(b>a){
 		max=b;
	 }
	if(c>a){
		max=c;
	}
	printf("so lon nhat la :%d\n", max);
	return 0;
 	
 	
 	
 }