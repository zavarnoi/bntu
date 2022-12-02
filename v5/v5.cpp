#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[4][5];

	printf("input matrix:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			mas[i][j] = rand() % 7 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int min = INT_MAX, ind_i = 0, ind_j = 0;
	for (int i = 0; i < 4; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			if (mas[i][j] < min) {
				min = mas[i][j];
				ind_i = i;
				ind_j = j;
			}
		}
	}

	printf("\nmin element: %d(%d, %d)", min, ind_i + 1, ind_j + 1);
}