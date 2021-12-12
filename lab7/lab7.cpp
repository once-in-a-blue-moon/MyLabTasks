#include <iostream>
#include <stdio.h>
#include <cmath>
#include <ctime>
using namespace std;

void initialize_array(int* arr, int size);
void print_array(int* arr, int size);
int max_el(int* arr, int size);
int sigma(int* arr, int size);
void arrMinusD(int* arr, int size);

int main(){
	int m;
	cout << "Enter array size: "; cin >> m;
	int *p = new int[m];
	initialize_array(p, m);
	print_array(p, m);
	cout << "max element is " << max_el(p, m) << endl;
	cout << "d = " << sigma(p, m) << endl;
	cout << "Result: " << endl;
	arrMinusD(p, m);
	delete [] p;
}
void initialize_array(int* arr, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}
void print_array(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
}
int max_el(int* arr, int size) {
	int max = arr[size];
	for (int i = 0; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int sigma(int* arr, int size) {
	int pmax = max_el(arr, size);
	int d = 0;
	for (int k = 0; k < size; k++) {
		d = d + pow((pmax - arr[k]), 2);
	}
	return d;
}
void arrMinusD(int* arr, int size) {
	int d = sigma(arr, size);
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i];
		if (i % 2 == 0) {
			arr[i] = arr[i] - d;
		}
		printf("%d\n", arr[i]);
	}
}