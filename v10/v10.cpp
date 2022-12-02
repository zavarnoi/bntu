#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[3][5];

	//printf("input matrix:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			mas[i][j] = rand() % 9 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int min = INT_MAX, ind_i, ind_j;;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (mas[i][j] < min) {
				min = mas[i][j];
				ind_i = i;
				ind_j = j;
			}
		}
	}

	int sum = 0;
	for (int j = 0; j < 5; j++) {
		sum += mas[ind_i][j];
	}
	for (int i = 0; i < 3; i++) {
		sum += mas[i][ind_j];
	}
	printf("\nsum of row and column of min element: %d", sum-min);
}