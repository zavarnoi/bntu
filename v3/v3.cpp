#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[3][3];

	//printf("input matrix:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mas[i][j] = rand() % 7 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 3; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int col_1 = 0, col_2 = 0, col_3 = 0;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			if (j == 0) {
				col_1 += mas[i][j];
			}
			if (j == 1) {
				col_2 += mas[i][j];
			}
			if (j == 2) {
				col_3 += mas[i][j];
			}
		}
	}

	printf("\n\n(%d, %d, %d)", col_1/3, col_2/3, col_3/3);
}