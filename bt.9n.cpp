//11. Viết chương trình nhập vào 2 số x, y và 1 trong 4 toán tử +, -, *, /. Nếu là + thì in ra
//kết quả x + y, nếu là – thì in ra x – y, nếu là * thì in ra x * y, nếu là / thì in ra x / y 

#include <stdio.h>

 
 int main(){
 	int x,y;
 	
 	
 	 printf("so nguyen x :");
 	 scanf("%d", &x);
 	 printf("so nguyen y :");
 	 scanf("%d", &y);
 	 char kt;
 	 printf("ki tu :");
 	 scanf(" %c", &kt);
 	 
 	 switch(kt){
 	 	case '+':
 	 		printf("%d", x+y);
 	 		break;
 	 	case '-':
 	 		printf("%d", x-y);
 	 		break;
 	 	case '*':
 	 		printf("%d", x*y);
			  break;
		case '/':
			printf("%d", x/y);
		break;
		
		default:
			printf("du lieu ko hop le");
			break;
	  }
	  return 0;
 }