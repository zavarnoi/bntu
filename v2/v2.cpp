#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[3][6];

	//printf("input matrix:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			mas[i][j] = rand() % 2 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 6; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int max_row = 0,ind;
	for (int i = 0; i < 3; i++) {
		int row = 0;

		for (int j = 0; j < 6; j++) {
			row += mas[i][j];
		}
		if (row > max_row) {
			max_row = row;
			ind = i;
		}
	}

	printf("\n\nindex of max row:%d", ind);
}