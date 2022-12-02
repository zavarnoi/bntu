#include <stdio.h>
#include <time.h>
#include <stdlib.h>// liba dla randoma

int main() {
	srand(time(NULL));

	int mas_1[3][5];

	//printf("input matrix:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			mas_1[i][j] = rand() % 17 + 1;
			//scanf_s("%d", &mas[i][j]); vvod s klavj
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			printf("%d\t", mas_1[i][j]);
		}
	}

	int mas_2[5][3];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			mas_2[i][j] = mas_1[j][i];
		}
	}

	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("\n");
		for (int j = 0; j < 3; j++) {
			printf("%d\t", mas_2[i][j]);
		}
	}
}