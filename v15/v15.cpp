#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[4][4];

	//printf("input matrix:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mas[i][j] = rand() % 17 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("\n");
		for (int j = 0; j < 4; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int max = INT_MIN;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mas[i][j] > max)
				max = mas[i][j];
		}
	}
	printf("\n\nmax of matrix: %d", max);
}