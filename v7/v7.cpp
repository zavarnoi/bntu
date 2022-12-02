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

	int main = 1;
	for (int i = 0; i < 5; i++) {
		main *= mas[i][i];
	}

	int second = 1;
	for (int i = 4; i > -1; i--) {
		second *= mas[i][4 - i];
	}
	printf("\nmain - secondary = %d", main - second);
}