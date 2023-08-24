#include <stdio.h>

char board[8][8] = {
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};

void displayBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    displayBoard();

    while (1) {
        int startX, startY, endX, endY;

        printf("Enter start position (x y): ");
        scanf("%d %d", &startX, &startY);
        printf("Enter end position (x y): ");
        scanf("%d %d", &endX, &endY);

        board[endX][endY] = board[startX][startY];
        board[startX][startY] = ' ';

        displayBoard();
    }

    return 0;
}
