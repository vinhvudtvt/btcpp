//10. Viết chương trình xác định biến ký tự color rồi in ra thông báo

#include <stdio.h>

int main(){
	char kt;
	 printf("color :", kt);
	 scanf("%c", &kt);
	 
	 switch(kt){
	 	case 'R':
	 		printf("RED");
	 		break;
	 	case 'B':
		    printf("BLUE");
			break;
		case 'Y':
	        printf("YELLOW");
		default:
		printf("BLACK");
		break;		
	 }
	 return 0;
}