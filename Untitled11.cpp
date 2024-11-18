#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	char kitu;
	scanf(" %c", &kitu);
	switch (kitu) {
	case '+':
		printf("%d", a + b);
		break;
	case'-':
		printf("%d", a - b);
		break;
	case'*':
		printf("%d", a * b);
		break;
	case'/':
		if (b = 0) printf(" ko chia duoc cho 0");
		printf("%d", a / b);
		break;
	default :
		printf("ko hop le ");
		break;
	}
	return 0;
}