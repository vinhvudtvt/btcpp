//vd8:Viết chương trình nhập vào tháng, in ra tháng đó có bao nhiêu ngay

#include <stdio.h>
int main(){
	int n;
	printf("thang : ", n);
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("31");
			break;
		case 2:
		    printf("28");
		    break;
	    case 3:
	        printf("31");
	        break;
	    case 4:
	    printf("30");
	    break;
	    case 5:
	    	printf("31");
	    	break;
	    	case 6:
	    		printf("30");
	    		break;
	    		default:
	    			printf("su lieu ko hop le ");
	    			break;
	    			
	}
	return 0;
}