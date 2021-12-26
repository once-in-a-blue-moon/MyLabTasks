#include <iostream>
using namespace std;

void generateMatrix(int**, int);
void printMatrix(int**, int);
void max_element(int**, int);

int main() {
	int size, n = 1;
	cout << "Enter matrix size: "; cin >> size;
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
	}
	generateMatrix(matrix, size);
	printMatrix(matrix, size);
	max_element(matrix, size);
	for (int i = 0; i < size; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	system("pause");
	return 0;
}

void generateMatrix(int** matr, int SIZE) {
	int value = 1;
	int prevrow = SIZE - 2, prevcol = SIZE;
	int i_plus = 0, j_plus = 0;
	for (int i = SIZE - 1, j = SIZE - 1; i >= 0 && j >= 0; i += i_plus, j += j_plus) {
		matr[i][j] = value;
		if (i == prevrow && j < prevcol) {	// если движение горизонтально влево
			if (i + 1 == SIZE) {
				i_plus = -1;
				j_plus = +1;
			}
			else {
				i_plus = +1;
				j_plus = -1;
			}
		}
		else if(i > prevrow && j < prevcol) {	//если движение по диагонали сверху вниз
			if (i + 1 == SIZE || j - 1 < 0) {	//если мы уже внизу диагонали
				if (j - 1 < 0 ) {
					i_plus = -1;
					j_plus = 0;
				}
				else{
					i_plus = 0;
					j_plus = -1;
				}
			}
			else {	//если движение вниз еще возможно
				i_plus = +1;
				j_plus = -1;
			}
		}
		else if(i < prevrow && j > prevcol){		//если движение по диагонали снизу вверх 
			if (j + 1 == SIZE || i - 1 < 0) {	//если мы уже вверху диагонали
				if (i - 1 < 0) {
					i_plus = 0;
					j_plus = -1;
				}
				else {
					i_plus = -1;
					j_plus = 0;
				}
			}
			else {		//если движение вверх еще возможно
				i_plus = -1;
				j_plus = +1;
			}
		}
		else if (i < prevrow && j == prevcol) {	//если движение вертикально снизу вверх
			if (j + 1 == SIZE) {
				i_plus = +1;
				j_plus = -1;
			}
			else {
				i_plus = -1;
				j_plus = +1;
			}
		}
		prevrow = i;
		prevcol = j;
		matr[i][j] = value++;
	}
}

void printMatrix(int** matr, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%4d", matr[i][j]);
		}
		printf("\n");
	}
}

void max_element(int** matr, int SIZE) {
	int max = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			max = matr[0][SIZE - 1];
			if (matr[SIZE - 1][0] > matr[0][SIZE - 1]) {
				max = matr[SIZE - 1][0];
			}
		}
	}
	printf("\nMax corner element is %d\n", max);
}
