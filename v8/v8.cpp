#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[5][5];

	//printf("input matrix:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			mas[i][j] = rand() % 7 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int sum = 0;
	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			sum += mas[i][j];
		}
	}

	printf("\n\nsum of elements under main diagonal: %d", sum);
}