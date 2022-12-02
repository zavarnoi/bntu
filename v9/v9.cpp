#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[4][6];

	//printf("input matrix:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			mas[i][j] = rand() % 17 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("\n");
		for (int j = 0; j < 6; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	for (int j = 0; j < 6; j++) {
		int min = INT_MAX, ind;
		for (int i = 0; i < 4; i++) {
			if (mas[i][j] < min) {
				min = mas[i][j];
				ind = i;
			}
		}
		printf("\n%d column: %d(row %d)", j+1, min, ind);
	}
}