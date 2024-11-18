//vd5: viết chương trình nhập vào 4 số nguyên.Tìm và In ra số lớn nhất

#include <stdio.h>
 int main(){
 	int a,b,c,d,max;
 	
 	printf("nhap vao so nguyen a :", a);
 	scanf("%d", &a);
 	printf("nhap vao so nguyen b :", b);
 	scanf("%d", &b);
 	printf("nhap vao so nguyen c :", c);
 	scanf("%d", &c);
 	printf("nhap vao so nguyen d :", d);
 	scanf("%d", &d);
 	
 	max=a;
 	if(b>a){
 		max=b;
	 }
	 if(c>a){
	 	max=c;
	 }
	 if(d>a){
	 	max=d;
	 }
	 printf("so lon nhat la :%d ", max);
	 
	 return 0;
 	
 	
 		
 	
 }