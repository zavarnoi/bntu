#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int mas[4][5];

	//printf("input matrix:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			mas[i][j] = rand() % 17 + 1;
			//scanf_s("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {
			printf("%d\t", mas[i][j]);
		}
	}

	int max_1 = INT_MIN, max_2 = INT_MIN, max_3 = INT_MIN;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (mas[i][j] > max_1) {
				max_3 = max_2;
				max_2 = max_1;
				max_1 = mas[i][j];
			}
			else if(mas[i][j] > max_2){
				max_3 = max_2;
				max_2 = mas[i][j];
			}
			else if (mas[i][j] > max_3) {
				max_3 = mas[i][j];
			}
		}
	}
	printf("\n\n1-st max of matrix: %d\n2-d max of matrix: %d\n3-d max of matrix: %d", max_1, max_2, max_3);
}