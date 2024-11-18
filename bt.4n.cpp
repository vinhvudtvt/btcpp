//VD 4: nhập vào số nguyên dương . In ra số chẵn hay lẽ

#include <stdio.h>

int main(){
	int x;
	
	printf("nhap vao so nguyen duong :", x);
	scanf("%d", &x);
	
	if(x%2==0){
		printf("%d so chan ", x);
		
	}
	else{
		printf("%d so le ", x);
	}
	return 0;
}