//Viết chương trình nhập vào 3 số nguyên rồi in ra màn hình theo thứ tự tăng dần.
#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap so nguyen a :", a);
	scanf("%d", &a);
	printf("nhap so nguyen b :", b);
	scanf("%d", &b);
	printf("nhap so nguyen c :", c);
	scanf("%d", &c);
	
	if(a>b&&b>c){
		printf("%d\n %d\n %d\n", c,b,a);
	}
	else if(b>a&&a>c){
		printf("%d\n %d\n %d\n", c,a,b);
	}
	else if(c>a&&a>b){
		printf("%d\n %d\n %d\n", b,a,c);
	}
	else if(c>b&&b>a){
		printf("%d\n %d\n %d\n", a,b,c);
	}
	else if(b>c&&c>a){
		printf("%d\n %d\n %d\n", a,c,b);
	}
	else if(b>c&&c>a){
		printf("%d\n %d\n %d\n", b,c,a);
		
	}
	else {
		printf("du lieu ko hop le");
	}
	return 0;
	
}