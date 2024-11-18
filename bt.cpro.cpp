 #include <stdio.h>
 int main() {
	int toi, ban;

	printf("Chon ra 1 (Keo), 2 (Bua), 3 (Giay):\n");
	printf("Toi chon 1, 2 hay 3: ");
	scanf(" %d", &toi); 

	printf("Ban chon gi: ");
	scanf(" %d", &ban); 

	switch (toi) {
	case 2:
		switch (ban) {
		case 2:
			printf("Hoa\n");
			break;
		case 1:
			printf("Toi thang\n");
			break;
		case 3:
			printf("Ban thang\n");
			break;
		default:
			printf("Lua chon khong hop le!\n");
			break; 
		}
		break;
	case 1:
		switch (ban) {
		case 2:
			printf("Ban thang\n");
			break;
		case 1:
			printf("Hoa\n");
			break;
		case 3:
			printf("Toi thang\n");
			break;
		default:
			printf("Lua chon khong hop le!\n");
			break; 
		}
		break;
	case 3:
		switch (ban) {
		case 2:
			printf("Toi thang\n");
			break;
		case 1:
			printf("Ban thang\n");
			break;
		case 3:
			printf("Hoa\n");
			break;
		default:
			printf("Lua chon khong hop le!\n");
			break; 
		}
		break;
	default:
		printf("Lua chon khong hop le!\n");
		break;
	}

	return 0;
}



