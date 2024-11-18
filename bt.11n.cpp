//Viết chương trình nhập vào 3 giá trị nguyên dương a, b, c. Kiểm tra xem a, b, c có
//phải là 3 cạnh của tam giác không? Nếu là 3 cạnh của tam giác thì tính diện tích của tam giác
//theo công thức sau:
//17. S = −−− )cp*)bp(*)ap(*p , với p là 1/2 chu vi của tam giác.
//Hướng dẫn: a, b, c là 3 cạnh của tam giác phải thỏa điều kiện sau:
//(a + b) > c và (a + c) > b và (b + c) > a

#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float p,S;
	
	printf("nhap so nguyen a:", a);
	scanf("%d", &a);
	printf("nhap so nguyen b:", b);
	scanf("%d", &b);
	printf("nhap so nguyen c:", c);
	scanf("%d", &c);
	
	if((a+b)>c&&(a+c)>b&&(b+c)>a){
	
	
	p=(a+b+c)/2;
	
	S = sqrt (p*(p-a)*(p-b)*(p-c));
	
	printf("a,b,c la 3 canh cua tam giac\n ");
	printf("dien tich cua hinh tam giac la :%f", S);
		 
}
else {
	printf("a,b,c ko phai hinh tam giac");
	
}
return 0;
	
}