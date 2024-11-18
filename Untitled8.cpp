#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;

    // Hiển thị hướng dẫn trò chơi
    printf("Chào mừng đến với trò chơi 'One-Two-Three, ra cái gì ra cái này'!\n");
    printf("Chọn một trong các lựa chọn sau:\n");
    printf("1. Búa\n");
    printf("2. Kéo\n");
    printf("3. Bao\n");

    // Người chơi chọn
    printf("Nhập lựa chọn của bạn (1, 2 hoặc 3): ");
    scanf("%d", &playerChoice);

    // Kiểm tra nhập hợp lệ
    if (playerChoice < 1 || playerChoice > 3) {
        printf("Lựa chọn không hợp lệ. Vui lòng chọn 1, 2 hoặc 3.\n");
        return 1;
    }

    // Máy tính chọn ngẫu nhiên
    srand(time(0)); // Khởi tạo seed ngẫu nhiên
    computerChoice = rand() % 3 + 1;

    // Hiển thị lựa chọn của máy tính
    printf("Máy tính đã chọn: ");
    switch (computerChoice) {
        case 1:
            printf("Búa\n");
            break;
        case 2:
            printf("Kéo\n");
            break;
        case 3:
            printf("Bao\n");
            break;
    }

    // Xác định kết quả trò chơi
    switch (playerChoice) {
        case 1: // Người chơi chọn Búa
            switch (computerChoice) {
                case 1:
                    printf("Kết quả: Hòa!\n");
                    break;
                case 2:
                    printf("Kết quả: Bạn thắng!\n");
                    break;
                case 3:
                    printf("Kết quả: Máy tính thắng!\n");
                    break;
            }
            break;

        case 2: // Người chơi chọn Kéo
            switch (computerChoice) {
                case 1:
                    printf("Kết quả: Máy tính thắng!\n");
                    break;
                case 2:
                    printf("Kết quả: Hòa!\n");
                    break;
                case 3:
                    printf("Kết quả: Bạn thắng!\n");
                    break;
            }
            break;

        case 3: // Người chơi chọn Bao
            switch (computerChoice) {
                case 1:
                    printf("Kết quả: Bạn thắng!\n");
                    break;
                case 2:
                    printf("Kết quả: Máy tính thắng!\n");
                    break;
                case 3:
                    printf("Kết quả: Hòa!\n");
                    break;
            }
            break;
    }

    return 0;
}