//Viết chương trình nhập vào điểm 3 môn thi: Toán, Lý, Hóa của học sinh. Nếu tổng
//điểm >= 15 và không có môn nào dưới 4 thì in kết quả đậu. Nếu đậu mà các môn đều lớn hơn 5
//thì in ra lời phê "Học đều các môn", ngược lại in ra "Học chưa đều các môn", các trường hợp
//khác là "Thi hỏng".

#include <stdio.h>

int main(){
	int T,L,H;
	printf("diem mon TOAN :", T);
	scanf("%d", &T);
	printf("diem mon LI :", L);
	scanf("%d", &L);
	printf("diem mon HOA :", H);
	scanf("%d", &H);
	
	if(T+L+H>=15&&T>=4&&L>=4&H>=4){
		printf("dau\n");
		if(T>5&&L>5,H>5){
			printf("hoc deu cac mon");
		}
	}
	else{
		printf("thi hong");
	}
	return 0;
	
}