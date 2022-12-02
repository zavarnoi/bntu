#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[5][4];

	//printf("input matrix:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			mas[i][j] = rand() % 19 - 9;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("\n");
		for (int j = 0; j < 4; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int min_pos = INT_MAX;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (mas[i][j] > 0 && mas[i][j] < min_pos) {
				min_pos = mas[i][j];
			}
		}
	}
	printf("\n\nmin positive element: %d", min_pos);
}