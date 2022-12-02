#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[4][5];

	//printf("input matrix:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			mas[i][j] = rand() % 19 - 9;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	printf("\n\nfirst 3 negative elements: ");
	int fl = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (mas[i][j] < 0) {
				printf("%d   ", mas[i][j]);
				fl++;
			}
			if (fl >= 3)
				return 0;
			//mojno dokinut proverok cherez: else if(fl == x){printf____}
		}
	}
	if (fl == 0)
		printf("no negative elements");
}