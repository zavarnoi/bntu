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

	int max = 0, ind_max, min = INT_MAX, ind_min;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			if (mas[i][j] > max) {
				max = mas[i][j];
				ind_max = i;
			}

			if (mas[i][j] < min) {
				min = mas[i][j];
				ind_min = i;
			}
		}
	}

	printf("\nindex of max:%d\nindex of min:%d\n", ind_max, ind_min);

	int cop[3];
	for (int j = 0; j < 3; j++) {
		cop[j] = mas[ind_max][j];
		mas[ind_max][j] = mas[ind_min][j];
		mas[ind_min][j] = cop[j];
	}

	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 3; j++) {
			printf("%d\t", mas[i][j]);
		}
	}
}