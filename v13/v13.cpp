#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[4][5];

	//printf("input matrix:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			mas[i][j] = rand() % 19 - 9;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (mas[i][j] > 0) {
				sum += mas[i][j];
			}
		}
	}
	printf("\n\nsum of positive elements: %d", sum);
}